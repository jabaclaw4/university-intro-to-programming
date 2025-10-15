#include "../headerFiles/quickSort.h"

void quick(int* arr, int left, int right) {
    if (left >= right) return;
    int p = arr[(right+left)/2], i = left, j = right;
    while (i <= j) {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    quick(arr, left, j);
    quick(arr, i, right);
}