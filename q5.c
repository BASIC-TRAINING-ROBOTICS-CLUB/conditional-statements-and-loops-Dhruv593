#include <stdio.h>

int main() {
    int n1, n2, n3, max;

    printf("Enter the number1 : ");
    scanf("%d", &n1);
    printf("Enter the number2 : ");
    scanf("%d", &n2);
    printf("Enter the number3 : ");
    scanf("%d", &n3);

    max = n1;
    if(n2 >= max) {
        max = n2;
    } 
    if(n3 >= max) {
        max = n3;
    }

    printf("%d is Maximum", max);

}