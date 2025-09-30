#include <stdio.h>
#include <stdlib.h>
#include "headerFiles/array_io.h"
#include "headerFiles/num1.3.10.h"
#include "headerFiles/num1.3.15.h"
#include "headerFiles/num1.3.19.h"
#include "headerFiles/num1.3.27.h"
#include "headerFiles/bubbleSort.h"
#include "headerFiles/quickSort.h"
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    const int n = 15;
    int a[n], b[n], c[n];
//    int answer, len, i;
//    scanf("%d",&len); для 1.3.27
    inputRandArray(a, n);
    printArray(a,n);
//    calculateHalfSums(a, n); для 1.3.10
//    intersection(a,b,n,c); для 1.3.15
//    deleteDuplicates(a,n); для 1.3.19
//    for (i = 0; i <= len; i++)
//        printf("%d ",binomK(len,i)); для 1.3.27
    quick(a,0,n-1);
    printf("%d elements of the array (after): ", n);
    printArray(a,n);

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("program works %.6f sec\n", cpu_time_used);

    return 0;
}