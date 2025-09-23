#include <stdio.h>
int main() {
    int i = 0;
    double x, sum = 0.0, sum_sq = 0.0, average, d;
    while (scanf("%lf", &x) == 1) {
        i++;
        sum += x;
        sum_sq += x * x;
    }
    average = sum/i;
    d = (sum_sq/i) - (average*average);
    printf("%.4f", d);
    return 0;
}