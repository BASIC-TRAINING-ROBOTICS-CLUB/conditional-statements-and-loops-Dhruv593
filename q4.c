#include <stdio.h>

int main() {
    int x,y;    
    printf("Enter X's Value : ");
    scanf("%d",&x);
    printf("Enter Y's Value : ");
    scanf("%d",&y);
    if(x > 0 && y > 0){
        printf("In First Cordinates.");
    }
    else if(x > 0 && y < 0){
        printf("In Forth Cordinates.");
    }
    else if(x < 0 && y < 0){
        printf("In Third Cordinates.");
    }
    else if(x < 0 && y > 0){
        printf("In Second Cordinates.");
    }
    return 0;
}