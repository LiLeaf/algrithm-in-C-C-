#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 0, c = 0, kase = 0;
    double result = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3 && a != 0 && b != 0 && c != 0) {
        result = (double) a / (double) b;
        printf("Case %d: %.*f\n", ++kase, c, result);
    }
    return EXIT_SUCCESS;
}