#include <stdio.h>

int main() {
    int num;
    int max;
    int max_index = 1;
    int current_index = 1;
    scanf("%d", &num);
    max = num;
    while (scanf("%d", &num) == 1 && num != 0) {
        current_index++;

        if (num > max) {
            max = num;
            max_index = current_index;
        }
    }

    printf("%d\n", max_index);
    return 0;
}