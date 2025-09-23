#include <stdio.h>

int main() {
    int n, a, count = 1, prev, next, i = 0; //count длина участка i кол во подходящих участков
    scanf("%d", &n);
    scanf("%d", &prev);
    while (scanf("%d", &next) == 1) {
        if (prev == next) {
            count++;
        }
        else {
            if (count >= n) {
                i++;
            }
            count = 1;
            prev = next;
        }
    }
    printf("%d", i);
    return 0;
}