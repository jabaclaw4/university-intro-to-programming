#include <stdio.h>

int main() {
    int n, i = 0;
    float sum = 0.0, average;
    while (scanf("%d", &n) == 1) {
        i++;
        sum += n;
    }
    average = sum/i;
    printf("%.2f",average);
    return 0;
}
