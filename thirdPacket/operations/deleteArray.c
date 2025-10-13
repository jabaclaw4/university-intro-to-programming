#include "../headerFiles/deleteArray.h"

void deleteArray(int *arr, int *arrDelete, int n, int *newSize) {
    int *ptr = arr, i;
    *newSize = 0;
    int *ptrDelete = arrDelete;
    for (i = 0; i < n; i++) {
        if (*ptr != 0) {
            *ptrDelete = *ptr;
             ptrDelete++;
             (*newSize)++;
        }
        ptr++;
    }
}