#include "../headerFiles/swapAny.h"
#include <string.h>

<<<<<<< HEAD
void swapAny(void *a, void *b, size_t size) { //memcpy
    int temp = *a;
    *a = *b;
    *b = temp;
}.+
=======
void swapAny(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);  // A -> temp
    memcpy(a, b, size);     // B -> A
    memcpy(b, temp, size);  // temp -> B
}
// в C char всегда имеет размер 1 байт
// это делает char[] хорошим буфером для побайтовой работы с памятью
// void* memcpy(void* a, void* b, size_t n) где dest - указатель на куда копировать src - указатель на откуда копировать n - сколько байт скопировать
>>>>>>> 8e6dafef1c1d2dbbc9c6e982d7d4d37686737174
