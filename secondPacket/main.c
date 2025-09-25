#include <stdio.h>
#include "headerFiles/array_io.h"
#include "headerFiles/num1.3.10.h"

int main() {
    const int n = 6;
    int a[n];
    inputArray(a, n);
    printf("array up to: ");
    printArray(a, n);

    calculateHalfSums(a, n);

    printf("result: ");
    printArray(a, n);
    return 0;
}