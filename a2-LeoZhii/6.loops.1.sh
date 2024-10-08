#!/bin/bash

for VAL in {1..10..1}
do
  let "a = $VAL % 2"
  if [ "$a" -eq 0 ]
  then
    echo "$VAL", even
  else
    echo "$VAL", odd
  fi
done
