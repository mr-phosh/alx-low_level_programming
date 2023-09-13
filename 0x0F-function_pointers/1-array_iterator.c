#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
    if (array == NULL || action == NULL) {
        return; // Safety check to ensure array and action are valid
    }

    for (size_t i = 0; i < size; i++) {
        action(array[i]); // Call the action function on each element of the array
    }
}

// Example action function: Print an integer
void print_int(int value) {
    printf("%d ", value);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);

    // Call array_iterator with the print_int function to print each element
    array_iterator(arr, arr_size, print_int);

    printf("\n");

    return 0;
}

