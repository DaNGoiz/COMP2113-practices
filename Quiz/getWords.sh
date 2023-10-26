#!/bin/bash

if [ $# -ne 1 ]; then
  exit 1
fi

input="$1"

if [ -f "$input" ]; then
  if [ -s "$input" ]; then
    cat "$input" | tr -s '\n\t' ' ' | tr -s ' ' | tr ' ' '\n'
  fi
fi