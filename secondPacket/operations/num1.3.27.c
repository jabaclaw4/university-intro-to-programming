#include "../headerFiles/num1.3.27.h"

int binomK(int n, int k) {
    int i, arr[n+1], j;
    for (i = 0; i <= n; i++)
        arr[i] = 0;
    arr[0] = 1;
    for (i = 1; i <= n; i++)
        for (j = i; j > 0; j--)
            arr[j] += arr[j - 1];
    return arr[k];
}