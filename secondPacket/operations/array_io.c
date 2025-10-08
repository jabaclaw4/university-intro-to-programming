#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../headerFiles/array_io.h"

void inputArray(int arr[], int size) {
    printf("enter %d elements of the array:", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inputRandArray(int arr[], int size) {
    srand(time(NULL));
    printf("%d elements of the array (before): ", size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }
}