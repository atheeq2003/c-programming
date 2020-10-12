//C Program to Swap Two Numbers
#include<stdio.h>
int main()
{
    int a,b,cont;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    cont = a;
    a = b;
    b = cont;
    printf("After swapping 1st number: %d\n",a);
    printf("After swapping 2nd number: %d",b);
    return 0;

}