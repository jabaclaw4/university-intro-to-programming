#include <stdio.h>

int main() {
    int n, min, i = 0, count = 0;
    scanf("%d", &min);
    while (scanf("%d", &n) == 1) {
        i++;
        if (n <= min) {
            min = n;
            count++;
        }
    }
    printf("%d",count+1);
    return 0;
}