#include <stdio.h>
int cal(int a, int b);

int cal(int a, int b) {
    printf("Sum : %d  \n", (a+b));
    printf("Subtraction : %d \n", (a-b));
    printf("Multiplication : %d \n", (a*b));
    printf("Division : %d \n", (a/b));

    return 0;
}

int main() {

    int a, b;
    printf("Enter Value of A : ");
    scanf("%d", &a);
    printf("Enter Value of B : ");
    scanf("%d", &b);

    cal(a, b);
    return 0;
}