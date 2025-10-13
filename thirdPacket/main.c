#include "headerFiles/arrayIO.h"
#include "stdlib.h"
#include "headerFiles/reverse.h"
#include "stdio.h"
#include "headerFiles/maxAndMin.h"
#include "headerFiles/sum_aveArray.h"

int main() {
    int n = getArraySize(), sum = 0, ave = 0;
    int *arr = NULL;
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
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

    free(arr);
    arr = NULL;
    return 0;
}