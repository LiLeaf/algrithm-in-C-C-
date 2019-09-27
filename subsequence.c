#include <stdio.h>
#include <stdlib.h>

/*
in order to avoid overflowing, us 1/n/n instead of 1/(n*n)
*/
int main() {
    int m = 0, n = 0, error = 0, kase = 0;
    double sum = 0;
    while (scanf("%d %d", &n, &m) == 2 && m != 0 && n != 0) {
        sum = 0;
        int i = 0;
        for (i = n; i <= m; i++) {
            sum += 1/(double) i/(double) i;
        }
        printf("Case %d: %.5f\n", ++kase, sum);
    }
    return EXIT_SUCCESS;
}