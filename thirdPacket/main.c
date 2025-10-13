#include "headerFiles/arrayIO.h"
#include "stdlib.h"
#include "headerFiles/reverse.h"
#include "stdio.h"

int main() {
    int n = getArraySize();
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("error");
        return 1;
    }
    inputArray(arr, n);
    reverse(arr, n); // вывод в обратном порядке
    free(arr);
    arr = NULL;
    return 0;
}