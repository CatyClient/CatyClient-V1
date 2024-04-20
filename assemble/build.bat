@echo off
cd assemble
powerpc-eabi-as.exe -mregnames -mgekko ../main.txt -o main
powerpc-eabi-objcopy.exe -O "binary" main main