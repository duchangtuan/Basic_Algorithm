#!/bin/bash

input_file=$1
awk '{for(i=1;i<=NF;i++)A[$i]++} END{for(k in A) print k, A[k]}' $input_file | sort -k2rg
