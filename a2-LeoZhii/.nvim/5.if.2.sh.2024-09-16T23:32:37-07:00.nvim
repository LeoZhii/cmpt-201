#!/bin/bash

if [ -x "$1" ] && [ -w "$1" ]
then
  echo true, true
elif [ -x "$1" ]
  then
    echo true, false
elif [ -w "$1" ]
  then
    echo false, true
else
  echo false, false
fi
