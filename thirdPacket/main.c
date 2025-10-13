#include "headerFiles/arrayIO.h"
#include "stdlib.h"
#include "headerFiles/reverse.h"
#include "stdio.h"
#include "headerFiles/maxAndMin.h"

int main() {
    int n = getArraySize(), min, max;
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("error");
        return 1;
    }
    inputArray(arr, n);
//    reverse(arr, n); // вывод в обратном порядке
    MinMax(arr, n, &max, &min);
    printf("min %d", min);
    printf(" max %d", max);
    free(arr);
    arr = NULL;
    return 0;
}