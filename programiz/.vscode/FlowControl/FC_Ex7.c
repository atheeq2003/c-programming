//Program to print sum of numbers entered by the user
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    for(i=1;i<=5;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("sum = %d\n",sum);
}