//C Program to Calculate the Sum of Natural Numbers using for loop
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;++i){
       sum = sum + i;
    }   
    printf("The sum is: %d",sum);
    return 0;
}