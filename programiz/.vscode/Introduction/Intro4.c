//C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main()
{
    double a,b,product;
    printf("Enter the 1st number: ");
    scanf("%lf",&a);
    printf("Enter the 2nd number: ");
    scanf("%lf",&b);
    product = a * b;
    printf("The product is: %.2lf",product);
    return 0;
}