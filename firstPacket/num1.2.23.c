#include <stdio.h>

int main() {
    int  a, pos = 0, last_pos = 0, first;
    scanf("%d", &first);
    while (scanf("%d", &a) == 1) {
        pos++;
        if (a == first) {
            last_pos = pos;
        }
    }
    printf("%d", last_pos+1);
    return 0;
}

