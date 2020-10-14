// Program to add numbers until the user enters zero
#include<stdio.h>
int main()
{
    int i,sum=0;
    do{
        printf("Enter a number: ");
        scanf("%d",&i);
         sum = sum + i;
    }while(i!=0);{
        printf("The sum is = %d \n",sum);
    }
    return 0; 
}