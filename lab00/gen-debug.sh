#!/bin/bash

echo "OSTYPE='$OSTYPE'" | tee debug.txt
echo "SH_VERSION='$(sh --version 2>&1 | cat)'" | tee -a debug.txt
echo "GIT_VERSION='$(git --version 2>&1 | cat)'" | tee -a debug.txt
echo "PYTHON_VERSION='$(python3 --version 2>&1 | cat)'" | tee -a debug.txt
echo "GCC_VERSION='$(gcc --version 2>&1 | cat)'" | tee -a debug.txt
echo "JAVA_VERSION='$(java -version 2>&1 | cat)'" | tee -a debug.txt
