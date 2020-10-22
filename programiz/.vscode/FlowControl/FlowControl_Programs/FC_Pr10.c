//C Program to Find Factorial of a Number
#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Error!, Factorial of a negative number doesn't exist.");
    }else{
    for(i=1;i<=num;++i){
        fact = fact * i;
    }
    printf("The factorial is: %d",fact);
    }
    return 0;
}