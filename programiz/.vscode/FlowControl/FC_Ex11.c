// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates [USING BREAK STATEMENT]
/* This program stops taking input when the user enters a negative number but does not add the last negative
   number entered by the user */
#include<stdio.h>
int main()
{
    double i,num,sum=0;
    for(i=1;i<6;++i){
        printf("Enter a number: ");
        scanf("%lf",&num);
        if(num<0.0){
           break; 
    }  
    sum = sum + num; 
    }
    printf("The sum is: %.2lf",sum);
}