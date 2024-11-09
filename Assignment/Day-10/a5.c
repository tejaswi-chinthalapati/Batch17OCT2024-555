#include <stdio.h>

void Triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}

void Triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;

    printf("Alphabet Triangle:\n");
    printAlphabetTriangle(n);

    printf("\nNumber Triangle:\n");
    printNumberTriangle(n);

    return 0;
}
