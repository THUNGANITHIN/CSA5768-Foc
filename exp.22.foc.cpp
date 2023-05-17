#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10, temp;

    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

   
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

