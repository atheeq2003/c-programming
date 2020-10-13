//Swap Numbers Without Using Temporary Variables
#include<stdio.h>
int main()
{
    int a,b,cont;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("After swapping 1st number: %d\n",a);
    printf("After swapping 2nd number: %d",b);
    return 0;

}