#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter the Size of array : ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter Elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    printf("The sum of array element is : %d ", sum);
}