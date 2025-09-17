#include <stdio.h>

int main() {
    int count = 0, a, first;
    scanf("%d",&first);
    while (scanf("%d", &a) == 1) {
        if (a == first)
            count++;
    }
    printf("%d",count);
    return 0;
}