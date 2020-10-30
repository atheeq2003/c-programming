//Power of a Number Using the while Loop
#include<stdio.h>
int main()
{
    int base,exp;
    long result = 1;
    printf("Enter the Base: ");
    scanf("%d",&base);
    printf("Enter the Exponent: ");
    scanf("%d",&exp);
    while(exp != 0){
        result = result * base;
        --exp;
    }
    printf("The power is: %ld",result);
    return 0;
} 