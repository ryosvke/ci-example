#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main(int argc, char **argv) {
    int n = 5;
    if (argc > 1) {
        char *p;
        int temp = strtoul(argv[1], &p, 0);
        if (*p == '\0') {
            n = temp;
        }
    }

    for (unsigned int i=1; i<=n; i++) {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}

