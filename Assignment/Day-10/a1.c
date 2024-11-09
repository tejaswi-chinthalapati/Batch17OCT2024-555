#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Output\n");
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    printf("NoofWays = %d\n", count);
    return 0;
}