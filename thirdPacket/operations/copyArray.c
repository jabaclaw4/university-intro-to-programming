#include "../headerFiles/copyArray.h"

void copyArray(int *arr, int *arrCopy, int n) {
    int *ptr = arr, i;
    int *ptrCopy = arrCopy;
    for (i = 0; i < n; i++) {
        *ptrCopy = (*ptr)*(*ptr);
        ptr++;
        ptrCopy++;
    }
}