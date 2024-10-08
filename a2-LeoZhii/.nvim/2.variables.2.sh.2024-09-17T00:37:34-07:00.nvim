#!/bin/bash

# random words directory
# /usr/share/dict/words

if [ $# -eq 0 ]
then
  head -n "$RANDOM" /usr/share/dict/words | tail -n 1
else
  WORDLIST=$(grep -E "^.{$1}$" /usr/share/dict/words)
  RANWORD=$(echo "$WORDLIST" | shuf -n 1)
  echo "$RANWORD"
fi
