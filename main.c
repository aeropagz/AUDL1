#include <stdio.h>
#include <time.h>
#include "fibonacci.h"


int main() {
    printf("%d \n", febonacciFor(3));
    clock_t tm1, tm2;
    double time = 0.0;
    int n = 20;
    long x = 0;
    while (time < 0.0) {
        tm1 = clock();
        x = fibonacci(n);
        tm2 = clock();
        time = (double) (tm2 - tm1) / CLOCKS_PER_SEC;
        n++;
    }
    printf("Index: %d - Number: %d, Zeit: %.2f \n", n, x, time);
    return 0;
}
