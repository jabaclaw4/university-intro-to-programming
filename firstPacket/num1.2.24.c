#include <stdio.h>

int main() {
    int n, min = 9999, max = 0;
    while (scanf("%d", &n) == 1) {
        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }
    printf("%d %d", min, max);
    return 0;
}