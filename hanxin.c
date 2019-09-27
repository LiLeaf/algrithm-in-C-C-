#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 0, c = 0, kase = 0, find = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        int i = 10;
        for (i; i < 100; i++) {
            if (i % 3 == a && i % 5 == b && i % 7 == c) {
                printf("Case %d: %d\n", ++kase, i);
                find = 1;
            }
        }
        if (!find) {
            printf("Case %d: No answer\n", ++kase);
        }
        find = 0;
    }
    return EXIT_SUCCESS;
}