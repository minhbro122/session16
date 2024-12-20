#include <stdio.h>

void updateElement(int *arr, int newValue, int position, int size) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;
    } else {
        printf("Invalid position\n");
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    updateElement(arr, 10, 2, size); // Update the element at position 2 to 10

    printf("Updated array: ");
    printArray(arr, size);

    return 0;
}

