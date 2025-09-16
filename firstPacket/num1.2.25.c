#include <stdio.h>

int main() {
    int n, max, i = 0, index;
    scanf("%d", &max);
    while (scanf("%d", &n) == 1) {
        i++;
        if (n > max) {
            max = n;
            index = i;
        }
    }
    printf("%d", index+1); //тк порядковый номер +1
    return 0;
}