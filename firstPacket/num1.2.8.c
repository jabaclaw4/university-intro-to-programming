#include <stdio.h>

int main() {
    int n, a, i = 0;
    int count_null = 0, count_plus = 0, count_minus = 0;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a);
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