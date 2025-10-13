#include "headerFiles/arrayIO.h"
#include "stdlib.h"
#include "headerFiles/reverse.h"
#include "stdio.h"
#include "headerFiles/maxAndMin.h"
#include "headerFiles/sum_aveArray.h"
#include "headerFiles/copyArray.h"
#include "headerFiles/deleteArray.h"

int main() {
    int n = getArraySize(), sum = 0, ave = 0, max, min, newSize;
    int *arr = NULL, *arrCopy = NULL, *arrDelete = NULL;

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("error");
        return 1;
    }

//    arrCopy = (int*)malloc(n * sizeof(int));
//    if (arrCopy == NULL) {
//        printf("error");
//        return 1;
//    }

    arrDelete = (int*)malloc(n * sizeof(int));
    if (arrDelete == NULL) {
        printf("error");
        return 1;
    }

    inputArray(arr, n);
//    reverse(arr, n); // вывод в обратном порядке #1

//    MinMax(arr, n, &max, &min); // #2
//    printf("min %d", min);
//    printf(" max %d", max);

//    SumAve(arr, n, &sum, &ave); // #3
//    printf("sum %d", sum);
//    printf(" ave %d", ave);

//    copyArray(arr, arrCopy, n); // #4
//    printArray(arr, n);
//    printArray(arrCopy, n);

    deleteArray(arr, arrDelete, n, &newSize); // #5
    printArray(arr, n);
    printArray(arrDelete, newSize);

    free(arr);
    arr = NULL;
    return 0;
}