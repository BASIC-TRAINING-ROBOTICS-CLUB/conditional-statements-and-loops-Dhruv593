#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of negative number doesn't exist. \n");
    } else {
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d \n", n, fact);
    }

    return 0;
}