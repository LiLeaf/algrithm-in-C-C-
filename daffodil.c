//compile: gcc daffodil.c -lm
//./a.out
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isDaffodil(int);
int main() {
    for (int i = 100; i < 1000; i++) {
        if (isDaffodil(i)) {
            printf("%d ", i);
        }
    }
    putchar('\n');
    return EXIT_SUCCESS;
}

int isDaffodil(int n) {
    int sum = 0, digit = n, error = 0, success = 0;
    if (n < 100 || n >= 1000) {
        fprintf(stderr, "Error number\n");
        success = error;
    }
    else {
        while (digit != 0) {
            sum += (int)pow((double)(digit % 10), (double)3);
            digit = digit / 10;
        }
        if (sum == n) {
            success = 1;
        }
    }
    return success;
}