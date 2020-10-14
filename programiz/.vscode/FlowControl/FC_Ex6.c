// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter a number: ");
     scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum = sum + i;
    }
    printf("sum = %d\n",sum);
}