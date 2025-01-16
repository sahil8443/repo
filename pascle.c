#include <stdio.h>

void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        int coeff = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}
