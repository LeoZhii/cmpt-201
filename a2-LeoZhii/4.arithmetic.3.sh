#!/bin/bash

RANNUM=$RANDOM

let "a = $RANNUM % ($2 - $1 + 1) + $1"

echo "$a"
