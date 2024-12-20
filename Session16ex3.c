#include <stdio.h>

void sum(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int a = 7, b = 12, result = 0;

    sum(&a, &b, &result);

    printf("Result: %d\n", result);

    return 0;
}

