//C Program to Compute Quotient and Remainder
#include<stdio.h>
int main()
{
    int a,b,Quotient,Reminder;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    if(b != 0){
        Quotient = a % b;
        Reminder = a / b;
        printf("The Quotient is:%d\n",Quotient);
        printf("The Reminder is:%d",Reminder);
    }
    else{
        printf("UNDEFINED NUMBER:");
    }
    return 0;
}