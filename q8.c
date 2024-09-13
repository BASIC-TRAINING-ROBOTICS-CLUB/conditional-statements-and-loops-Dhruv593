#include <stdio.h>
int main() {
    char var;
    printf("Enter Character here : ");
    scanf("%c",&var);
    if(var =='a'||var =='e'||var =='i'||var =='o'||var =='u' ||var =='A'||var =='E'||var =='I'||var =='O'||var =='U'){
        printf("The character \"%c\" is Vowel",var);
    }
    else{
        printf("The character \"%c\" is not Vowel",var);
    }

    return 0;
}
