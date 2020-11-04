//C Program to Make a Simple Calculator Using switch...case
#include<stdio.h>
int main()
{
    char operator;
    double n1,n2;
    printf("Enter the operation: ");
    scanf("%c",&operator);
    printf("Enter the first number: ");
    scanf("%lf",&n1);
    printf("Enter the second number: ");
    scanf("%lf",&n2);
    switch(operator){
        case '+':
            printf("%lf + %lf = %lf",n1,n2,n1+n2);
            break;
        case '-':
            printf("%lf - %lf = %lf",n1,n2,n1-n2);
            break;
        case '*':
            printf("%lf * %lf = %lf",n1,n2,n1*n2);
            break;
        case '/':
            printf("%lf / %lf = %lf",n1,n2,n1/n2);
            break;   

        default:
            printf("Invalid Operator!");
} 
return 0;
}