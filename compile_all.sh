#!/bin/bash
# Compiles every program to check for errors
for f in */*.cpp; do
  g++ -std=c++17 -Wall -o /tmp/test_bin "$f" && echo "OK   $f" || echo "FAIL $f"
done
