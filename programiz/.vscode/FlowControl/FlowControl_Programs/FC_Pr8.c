//C Program to Check Whether a Character is an Alphabet or not
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(isalpha(a)){
        printf("It is an alphabet.");
    }else{
        printf("It is not an alphabet.");
    }
    return 0;
}