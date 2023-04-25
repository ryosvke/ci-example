unsigned int fibonacci(unsigned int n) {
    unsigned int a = 0;
    unsigned int b = 2;  // FIXME! correct value is 1

    switch (n) {
        case 0:
        case 1:
            return a;
        case 2:
            return b;
        default:
            break;
    }

    for (int i=0; i<n-2; i++) {
        unsigned int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

