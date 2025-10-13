#include "../headerFiles/sum_aveArray.h"

void SumAve (int *arr, int n, int *sum, int *ave) {
    int *ptr = arr, i;
    for (i = 0; i < n; i++) {
        *sum += *ptr;
        ptr++;
    }
    *ave = *sum/n;
}