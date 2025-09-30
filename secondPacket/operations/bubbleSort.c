#include "../headerFiles/bubbleSort.h"

void bubble(int arr[], int size) {
    int i, j, res;
    for (j = 0;j < size - 1; j++) {
        for (i = 0; i < size - j - 1; i++) {
            if (arr[i] > arr[i+1]) {
                res = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = res;
            }
        }
    }
}