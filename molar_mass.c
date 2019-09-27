#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define maxn 105

int main() {
    char m[maxn], s[maxn];
    m['C'] = 12.01; m['H'] = 1.008; m['O'] = 16.00; m['N'] = 14.01;
    int kase = 0;
    scanf("%d", &kase);
    while (kase--) {
        double sum = 0,weight = 0;
        int number = 0;
        scanf("%s", s);
        for (int i = 0; s[i]; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                number = number * 10 + s[i] - '0';
            }
            else {
                if (number == 0) number = 1;
                sum += weight * number;
                number = 0;
                weight = m[s[i]];
            }
        }
        if (number == 0) number = 1;
        sum += weight * number;
        printf("The Molar Mass is: %.3lf\n", sum);
    }
    return EXIT_SUCCESS;
}