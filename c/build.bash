#!/usr/bin/env bash
set -eu

cd $(dirname $0)

build_example() {
    echo "build example"
    gcc -Wall fibonacci.c fibonacci_example.c -o fibonacci_example
}


build_example
