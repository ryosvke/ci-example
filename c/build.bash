#!/usr/bin/env bash
set -eu

cd $(dirname $0)

install_utest() {
    echo "install utest.h"
    git clone https://github.com/sheredom/utest.h.git
}

build_test() {
    echo "build test"
    if [ ! -f utest.h/utest.h ]; then
        install_utest
    fi
    gcc -Wall fibonacci.c fibonacci_test.c -o fibonacci_test
}

build_example() {
    echo "build example"
    gcc -Wall fibonacci.c fibonacci_example.c -o fibonacci_example
}


build_example
build_test
