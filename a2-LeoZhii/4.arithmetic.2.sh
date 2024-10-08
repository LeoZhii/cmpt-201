#!/bin/bash

RANNUM=$RANDOM

let "a = RANNUM % 100"

echo "$a"
