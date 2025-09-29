#include "../headerFiles/num1.3.10.h"

void calculateHalfSums(int arr[], int size) {
    int prev = arr[0], i;
    for (i = 1; i < size - 1; i++) {
        int current = arr[i];
        arr[i] = (prev + arr[i+1]) / 2;
        prev = current;
    }
}