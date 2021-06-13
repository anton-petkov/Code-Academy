#!/bin/bash
PREFIX=194.145.63
FILENAME=$(date +"%m_%d_%Y").txt
touch $FILENAME
echo '' >$FILENAME
for OCTET in $(seq 1 255); do

    echo -en "Pinging ${PREFIX}.${OCTET}...."
    ping -c1 -w1 ${PREFIX}.${OCTET} >/dev/null 2>&1
    if [ "$?" -eq "0" ]; then
        echo "${PREFIX}.${OCTET} OK" >>$FILENAME
        echo " OK"
    else
        echo " Failed"
    fi
done
