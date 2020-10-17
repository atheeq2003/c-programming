//C Program to Check Whether a Number is Even or Odd
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    i = i % 2;
    if(i == 0){
        printf("The number is Even: %d",i);
    }
    else{
        printf("The number is odd: %d",i);
    }
    return 0;
}