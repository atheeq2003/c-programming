//Program to Count the Number of Digits using for loop
#include<stdio.h>
int main()
{
    long n;
    int count = 0;
    printf("Enter the integer: ");
    scanf("%ld",&n);
    while(n!=0){
        n = n / 10;
        ++count;
    }
   printf("Number of Digits: %d ",count);
   return 0;
}