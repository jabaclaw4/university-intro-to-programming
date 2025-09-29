#include "../headerFiles/num1.3.15.h"

int intersection(int arr[], int arr1[], int size, int new[]) {
    int i, dig_arr, j, new_in = 0;
    for (i = 0; i < size; i++) {
        new[i] = 0; //пусто
    }
    for (i = 0; i < size; i++) {
        dig_arr = arr[i];
        for (j = 0; j < size; j++) {
            if (dig_arr == arr1[j]) {
                new[new_in] = arr1[j];
                new_in++;
            }
        }
    }
    return new_in;
}