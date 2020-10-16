// Program to create a simple calculator
#include<stdio.h>
int main()
{
    char operator;
    double num1,num2;
    printf("Enter an operator: ");
    scanf("%c",&operator);
    printf("Enter the 1st Number: ");
    scanf("%lf",&num1);
    printf("Enter the 2nd Number: ");
    scanf("%lf",&num2);
 switch(operator){
    case '+':
    printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2);
    break;

    case '-':
    printf("%.2lf - %.2lf = %.2lf",num1,num2,num1-num2);
    break;

    case '*':
    printf("%.2lf * %.2lf = %.2lf",num1,num2,num1*num2);
    break;

    case '/':
    printf("%.2lf / %.2lf = %.2lf",num1,num2,num1/num2);
    break;

    default:
    printf("Error! operator is not correct");
}
return 0;
}