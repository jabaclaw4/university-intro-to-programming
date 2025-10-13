#include <stdio.h>

void inputArray(int *arr, int n) {
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr);
        ptr++;
    }
}

void printArray(int *arr, int N) {
    int *ptr = arr;
    for (int i = 0; i < N; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
}

int getArraySize() {
    int size;
    printf("input size of array: ");
    scanf("%d", &size);
    return size;
}