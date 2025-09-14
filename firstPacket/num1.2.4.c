#include <stdio.h>

int main() {
    int n, a, i = 0;
    float sum = 0.0, average;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a);
        sum += a;
    }
    average = sum/n;
    printf("%.2f",average);
    return 0;
}
