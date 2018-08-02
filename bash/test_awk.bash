#!/bin/bash

input_file=$1
awk '{A[$0]++} END{for(i in A) print i, A[i]}' $input_file | sort -k2rg

# element not in a associative array should use
# !(ele int A)
