#include <stdio.h>

int main() {
    int n;
    int odd = 0, even = 0;
    printf("Enter the Size of array : ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter Elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
    7    if(a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Odd : %d \n", odd);
    printf("Even : %d \n", even);

    return 0;
}