//Program to Check Palindrome
#include<stdio.h>
int main()
{
    int original,reversed=0,remainder,n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    original = n;
    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }if(original == reversed){
        printf("The number is Palindrome.");
    }else{
        printf("The number is not Palindrome.");
    }
    return 0;                   
}