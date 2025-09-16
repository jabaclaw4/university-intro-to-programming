#include <stdio.h>

int main() {
    int a, count_null = 0, count_plus = 0, count_minus = 0;
    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            count_null += 1;
        }
        else if (a > 0) {
            count_plus += 1;
        }
        else {
            count_minus += 1;
        }
    }
    printf("Count negative %d\n", count_minus);
    printf("Count null %d\n", count_null);
    printf("Count pozitive %d\n", count_plus);
    return 0;
}