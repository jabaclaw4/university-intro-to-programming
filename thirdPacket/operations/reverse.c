#include "../headerFiles/reverse.h"
#include "stdio.h"

void reverse(int *arr, int n) {
    int *ptr = arr + (n-1), i;
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }
}