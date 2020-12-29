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

![Image of 5G](https://github.com/fimal/f5gc-k8s/5G.png)

### Installing

* Download the related files.
```
$ git clone https://github.com/fimal/ueransim.git
$ cd ueransim
https://github.com/aligungr/UERANSIM/wiki

```
### Testing

```
$ sudo ./attacker.sh --help
Usage: ./attacker.sh [ sql | api | imsiCracking | rsExhaustion ]
```
### IMSI Cracking Attack
```
$ sudo ./attacker.sh imsiCracking
```
### Resource Exhaustion
```
$ sudo ./attacker.sh rsExhaustion
```

### SQL Attack
```
$ sudo ./attacker.sh sql
```

### API Attack
```
$ sudo ./attacker.sh api
```






