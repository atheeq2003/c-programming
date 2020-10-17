//C Program to Check Whether a Character is a Vowel or Consonant
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c,vowel,VOWEL;
    printf("Enter a alphabet: ");
    scanf("%c",&c);
    VOWEL = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
   if (!isalpha(c)){
      printf("Error! Non-alphabetic character.");
   }else if (VOWEL || vowel){
      printf("%c is a vowel.", c);
   }else{
      printf("%c is a consonant.", c);
   }
    return 0;
}
   