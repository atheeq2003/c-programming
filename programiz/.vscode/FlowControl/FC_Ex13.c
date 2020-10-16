// Program to create a simple calculator
#include<stdio.h>
int main()
{
    char operator;
    double num1,num2;
    printf("Enter the 1st Number: ");
    scanf("%d",&num1);
    printf("Enter the 2nd Number: ");
    scanf("%d",&num2);
    printf("Enter an operator: ");
    scanf("%c",&operator);
 switch(operator){
    case '+';
    printf("%lf + %lf = %lf",num1,num2,num1+num2);
    break;

    case '-';
    printf("%lf - %lf = %lf",num1,num2,num1-num2);
    break;

    case '*';
    printf("%lf * %lf = %lf",num1,num2,num1*num2);
    break;

    case '/';
    printf("%lf / %lf = %lf",num1,num2,num1/num2);
    break;

    case '%';
    printf("%lf % %lf = %lf",num1,num2,num1%num2);
    break;

    default:
    printf("Error! operator is not correct");
}
return 0;
)