#include "headerFiles/arrayIO.h"
#include "stdlib.h"
#include "headerFiles/reverse.h"

int main() {
    int n = getArraySize();
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    inputArray(arr, n);
    reverse(arr, n);
    printArray(arr, n);
    free(arr);
    arr = NULL;
    return 0;
}