#include <stdio.h>
//неправильно работает формула дисперсии?
int main() {
    int n, i;
    double x, sum = 0.0, sum_sq = 0.0, average, D;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%.2f", &x);
        sum += x;
        sum_sq += x * x;
    }
    average = sum / n;
    D = (sum_sq / n) - (average * average);
    printf("%.4f", D);
    return 0;
}