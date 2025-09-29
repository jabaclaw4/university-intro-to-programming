#include <stdio.h>
#include "headerFiles/array_io.h"
#include "headerFiles/num1.3.10.h"
#include "headerFiles/num1.3.15.h"

int main() {
    const int n = 6;
    int a[n], b[n], c[n], answer;
    inputArray(a, n);
    inputArray(b, n);
//    printf("first array up to: ");
//    printArray(a, n);
//    calculateHalfSums(a, n);
    intersection(a,b,n,c);
    answer = intersection(a,b,n,c);
    printf("result: ");
    printArray(c, n);
    printf("\nanswer: ");
    printf("%d",answer);
    return 0;
}