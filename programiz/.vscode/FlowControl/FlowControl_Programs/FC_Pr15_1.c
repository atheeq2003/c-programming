//Program to Count the Number of Digits
#include<stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter the integer: ");
    scanf("%d",&n);
    for(n;n!=0;++count){
        n = n / 10;
    }
    printf("Number of Digits: %d ",count);
    return 0;
}