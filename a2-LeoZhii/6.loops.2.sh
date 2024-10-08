#!/bin/bash

for value in "$1"/*
do
  if [ -d "$value" ]
  then
    echo "$value" find "$value" -type f | wc -l
  else
    SIZE=$(stat -c %s "$value")
    echo "$value" "$SIZE"
  fi
done
