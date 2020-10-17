//C Program to Check Whether a Character is a Vowel or Consonant
#include<stdio.h>
int main()
{
    char c,vowel,VOWEL;
    printf("Enter a alphabet: ");
    scanf("%c",&c);
    VOWEL = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if(VOWEL || vowel){
        printf("The character is a vowel: %c",c);
    }else{
        printf("The character is a consonant: %c",c);
    }
    return 0;
}