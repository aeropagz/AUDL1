#include "fibonacci.h"

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int febonacciFor(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    long a = 1;
    long b = 1;
    long c = 1;
    for (int i = 3; i <= n; i++) {
        a = b + c;
        c = b;
        b = a;
    }
    return a;
}