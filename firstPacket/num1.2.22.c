#include <stdio.h>

int main() {
    int n = 0, a, first;
    scanf("%d",&first);
    while (scanf("%d",&a) == 1) {
        n++;
        if (a == first) {
            printf("%d",n);
            break;
        }
    }
    return 0;
}