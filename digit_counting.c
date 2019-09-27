#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 10001
int number[MAXN][10] = {0};

int main() {
    for (int i = 1; i < MAXN; i++) {
        for (int k = 0; k < 10; k++) {
            number[i][k] = number[i - 1][k];
        }
        int digit = i;
        while (digit) {
            number[i][digit % 10] += 1;
            digit = digit / 10;
        }
    }
    int kase = 0, n = 0;
    scanf("%d", &kase);
    while (kase--) {
        scanf("%d", &n);
        for (int i = 0; i < 10; i++) {
            printf("%3d", number[n][i]);
        }
    }
    putchar('\n');
    return EXIT_SUCCESS;
}