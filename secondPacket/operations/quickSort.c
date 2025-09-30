#include "../headerFiles/quickSort.h"

void quick(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[right], i = left;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;

    quick(arr, left, i - 1);
    quick(arr, i + 1, right);
}