#include "../headerFiles/swapAny.h"
#include <stdlib.h>

void swapAny(void *a, void *b, size_t size) {
    int temp = *a;
    *a = *b;
    *b = temp;
}