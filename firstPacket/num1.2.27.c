#include <stdio.h>

int main() {
    int n, minIn, i = 1, min, count = 0, maxIn;
    scanf("%d", &min);
    while (scanf("%d", &n) == 1) {
        if (n < min) {
            min = n;
            minIn = i;
            maxIn = i;
        } else if (n == min) {
            maxIn = i;
        }
        i++;
    }
    printf("%d %d", minIn, maxIn);
    return 0;
}