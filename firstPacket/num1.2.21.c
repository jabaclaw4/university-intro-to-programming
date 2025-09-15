#include <stdio.h>

int main() {
    int count = 0, a, n, i, first;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a);
        if (i == 0) {
            first = a;
        }
        if (a == first) {
            count++;
        }
    }
    printf("%d",count-1); //-1 тк вопрос "далее встречается", но если нужно учитывая первое число то убрать -1
}