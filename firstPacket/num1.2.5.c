#include <stdio.h>
//неправильно работает формула дисперсии?
int main() {
    int n, i = 0;
    double x, sum = 0.0, sum_sq = 0.0, average, d;
    while (scanf("%.2f", &n) == 1) {
        sum += x;
        sum_sq += x * x;
    }
    average = sum/i;
    d = (sum_sq/n) - (average*average);
    printf("%.4f", d);
    return 0;
}