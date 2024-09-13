#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Given number is even \n");
    } else {
        printf("Given number is odd \n");
    }

    return 0;
}