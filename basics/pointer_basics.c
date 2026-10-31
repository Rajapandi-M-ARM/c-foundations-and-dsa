#include <stdio.h>

/*
 * Pointer Fundamentals & Memory Inspection
 * Demonstrates value dereferencing and address manipulation.
 */

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 42;
    int *ptr = &x;

    printf("--- Variable & Pointer Inspection ---\n");
    printf("Value of x:       %d\n", x);
    printf("Address of x:     %p\n", (void *)&x);
    printf("Pointer target:   %p\n", (void *)ptr);
    printf("Dereferenced ptr: %d\n\n", *ptr);

    int num1 = 10, num2 = 99;
    printf("--- Pointer-Based Swap ---\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
