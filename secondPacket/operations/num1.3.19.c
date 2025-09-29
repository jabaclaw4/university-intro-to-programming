#include "../headerFiles/num1.3.19.h"

void deleteDuplicates(int arr[], int size) {
    int i, j, dig_arr;
    for (i = 0; i < size; i++) {
        dig_arr = arr[i];
        for (j = i + 1; j < size; j++)
            if (dig_arr == arr[j])
                arr[j] = 0;
    }
}