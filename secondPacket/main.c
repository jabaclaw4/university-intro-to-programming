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
    const int n = 1000;
    int a[n];
    inputRandArray(a, n);
    printArray(a,n);
    quick(a,0,n-1);
//    bubble(a,n);
    printf("%d elements of the array (after): ", n);
    printArray(a,n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("program works %.6f sec\n", cpu_time_used);
    return 0;
}