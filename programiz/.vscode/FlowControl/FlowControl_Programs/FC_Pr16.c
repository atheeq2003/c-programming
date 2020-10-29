//C Program to Reverse a Number
#include<stdio.h>
int main()
{
    int n,rev=0,remainder;
    printf("Enter the integer: ");
    scanf("%d",&n);
    while(n != 0){
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    printf("After reversing: %d",rev);
    return 0;
}