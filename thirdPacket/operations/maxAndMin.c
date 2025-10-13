#include "../headerFiles/maxAndMin.h"

void MinMax(int *arr, int n, int *max, int *min) {
    int *ptr = arr, i;
    *max = *ptr;
    *min = *ptr;
    for (i = 0; i < n; i++) {
        if (*ptr > *max) {
            *max = *ptr;
        }
        if (*ptr < *min) {
            *min = *ptr;
        }
        ptr++;
    }
}