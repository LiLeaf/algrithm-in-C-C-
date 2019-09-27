#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char s[90];
    int sum = 0, count = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'O') {
            count++;
            sum += count;
        }
        else {
            count = 0;
        }
    }
    printf("%d\n", sum);
    return EXIT_SUCCESS;
}