#include <stdio.h>
#include "headerFiles/array_io.h"
#include "headerFiles/num1.3.10.h"
#include "headerFiles/num1.3.15.h"
#include "headerFiles/num1.3.19.h"
#include "headerFiles/num1.3.27.h"

int main() {
//    const int n = 6;
//    int a[n], b[n], c[n];
    int answer, len, i;
    scanf("%d",&len);
//    inputArray(a, n);
//    inputArray(b, n); для 1.3.15

//    printf("first array up to: "); для 1.3.10
//    printArray(a, n);
//    calculateHalfSums(a, n);

//    intersection(a,b,n,c); для 1.3.15
//    answer = intersection(a,b,n,c);
//    printf("result: ");
//    printArray(c, n);
//    printf("\nanswer: ");
//    printf("%d",answer);

//    deleteDuplicates(a,n); для 1.3.19
//    printArray(a,n);

    for (i = 0; i <= len; i++)
        printf("%d ",binomK(len,i));
    return 0;
}