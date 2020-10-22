//C Program to Calculate the Sum of Natural Numbers using while loop
#include<stdio.h>
int main()
{
    int i=1,num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<16){
        sum = sum + i;
        ++i;
    }
    printf("The sum is: %d",sum);
    return 0;
}
