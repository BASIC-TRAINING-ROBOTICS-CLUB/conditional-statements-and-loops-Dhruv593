#include <stdio.h>

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    if(n > 0) {
        printf("Given number is Positive");
    } else if(n < 0) {
        printf("Given number is Negative");
    } else {
        printf("Given number is Zero");
    }
}