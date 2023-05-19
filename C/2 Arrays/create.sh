#!/bin/bash

echo "[*] C Source File Name  : "
read fileName 

touch $fileName

cat 00_boiler_plate.c >> $fileName
