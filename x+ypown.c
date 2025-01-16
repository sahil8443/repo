#include <stdio.h>

void bino(int n) {
    int coeff = 1;
    printf("(x+y)^%d = ", n);

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            printf("+ ");
        }
        if (coeff > 1) {
            printf("%d ", coeff);
        }
        if (n - i > 0) {
            printf("x^%d ", n - i);
        }
        if (i > 0) {
            printf("y^%d ", i);
        }
        coeff = coeff * (n - i) / (i + 1);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    bino(n);
    return 0;
}
