<p align="center">
<img src="https://img.shields.io/badge/UERANSIM-v2.2.1-blue" />
<img src="https://img.shields.io/badge/3GPP-R15-orange" />
<img src="https://img.shields.io/badge/License-GPL--3.0-green"/>
</p>

**UERANSIM** <small>(pronounced "ju-i ræn sɪm")</small>, is the open-source state-of-the-art 5G UE and RAN (gNodeB) implementation. The project can be used for testing 5G Core Network and studying 5G System.

## Current Status
Our UE and gNodeB are functional and ready to use. You can connect them to your 5G core network right now and start using it.

In terms of 3GPP coverage, fundamental control plane features are done. However, some of them are in progress.

At the same time, 5G-NR radio interface is under development but not complete yet. Currently we utilize the radio interface over a simulated environment.

<p align="center">
<img src="https://img.shields.io/badge/5G%20Radio%20Interface-in%20progress-orange" alt="OS Linux"/>
<img src="https://img.shields.io/badge/Control%20Plane-functional-green" alt="OS Linux"/>
<img src="https://img.shields.io/badge/User%20Plane-functional-green" alt="OS Linux"/>
</p>

## Documentation
You can find the documentation on [UERANSIM Wiki](https://github.com/aligungr/UERANSIM/wiki).

And, since the project is rapidly developing, please make sure that you have always the [latest](https://github.com/aligungr/UERANSIM/releases) UERANSIM.

## Attacks
Following attacks demonstraited:
 - IMSI cracking - Getting hold of target’s IMSI is the first step of a set of attacks such as location sharing, MMS/SMS hijacking, battery depletion, etc. The attacker can “discover” portions of the target’s IMSI and then can brute force guess the whole value.
Data enriched from N1/N2 interfaces supplied towards SBI and is analyzed by Radware KWAF to detect the attack
 - Resource exhaustion – a UE generates a high rate of authorization requests saturating the AUSF.
SUCI data enriched from N1 supplied to SBI and tracked by Radware KWAF to detect and mitigate the attack.
 - Attacks on the SBI based control plane - Attacker can infiltrate the control plane and gathers additional data / breaks control plane.
Data is inspected by Radware KWAF and detected/mitigated using Positive and Negative Security.

gNB/UE simulators used from project: https://github.com/aligungr/UERANSIM and https://github.com/hhorai/gnbsim

NOTE: Can work at version `5.0.0-23-generic` to run UPF(GTP5G Module.)

![Image of 5G](https://github.com/fimal/ueransim/blob/main/5G.png)

### Requirements
```
Ubuntu 16.04 or later
OpenJDK 11 or later
g++/gcc version 6.4.0 or later
```
### Dependencies
```
sudo apt update
sudo apt upgrade
sudo apt install make
sudo apt install g++
sudo apt install openjdk-11-jdk
sudo apt install maven
sudo apt install libsctp-dev lksctp-tools
```
### Building
* Download the related files.

```
$ git clone https://github.com/fimal/ueransim.git
$ cd ueransim
Make sure that JAVA_HOME variable is set.
Run the following command:
./nr-build
```

### Testing

## KWAF Configuration
```
* Configure KWAF WAAS-CONTROLLER to add real ip. kubectl
    edit -n kwaf deployment waas-controller-deployment
    under command: "- --user-ip-headers=kwaf-suci"
* Load 3GPP API schemas for desired NF Security (API Security Properties)
* Create clasifiers (for example: ausf-auth - Path: /nausf-auth/v1 ; ausf-soR - Path: /nausf-sorprotection/v1 ; ausf-upuprotection - Path:  /nausf-upuprotection/v1)
* Enable Protections: Signature Engine, Expression Engine Activity Tracking and API Security
```
##Attacker
```
$ sudo ./attacker.sh --help
Usage: ./attacker.sh [ sql | api | imsiCracking | rsExhaustion ]
```
## IMSI Cracking Attack
```
$ sudo ./attacker.sh imsiCracking
```
## Resource Exhaustion
```
$ sudo ./attacker.sh rsExhaustion
```

## SQL Attack
```
$ sudo ./attacker.sh sql
```

## API Attack
```
$ sudo ./attacker.sh api
```






