#!/usr/bin/env bash
# Copyright 2015 Nathan Green

for i in {1..100};  # (seq 1 100)
do
  s=''
  if [ $(($i % 3)) = 0 ]; then
    s='fizz'
  fi
  if [ $(($i % 5)) = 0 ]; then
    s=$s'buzz'
  fi
  if [ ${#s} = 0 ]; then
    s=$i
  fi
  echo $s
done
