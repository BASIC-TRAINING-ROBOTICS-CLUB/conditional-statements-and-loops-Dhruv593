#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter the lengths : ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an Equilateral Triangle.\n");
    } else {
        printf("The triangle is not an Equilateral Triangle.\n");
    }
    return 0;
}