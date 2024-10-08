#!/bin/bash



THIRDLINE=$(head -n 3 /dev/stdin | tail -n 1)

echo "$THIRDLINE"
