#include <stdio.h>

int main() {
    int i, n;
    float x, sum = 1.0, term = 1.0, fact = 1.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        term = term * (-x) / i;
        fact = fact * i;
        sum = sum + term / fact;
    }
    printf("e^(-%.2f) = %.4f", x, sum);
    return 0;
}

