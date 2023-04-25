#!/usr/bin/env python3
import sys

def fibonacci(n):
    a = 0
    b = 2  # FIXME! correct value is 1

    if n == 0 or n == 1:
        return a
    elif n == 2:
        return b

    for i in range(n-2):
        a, b = b, a + b
    return b


def main():
    args = sys.argv
    n = 5
    if 1 < len(args):
        s = args[1]
        if s.isdigit():
            n = int(s)

    for i in range(1, n+1):
        print(fibonacci(i))


if __name__ == "__main__":
    main()
