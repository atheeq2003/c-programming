// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result
/* This program does not stop taking input even when the user enters a negative number but ignores the negative numbers adds
   negative numbers and adds only the positive numbers */
#include<stdio.h>
int main()
{
    double i,num,sum=0;
    for(i=1;i<=6;++i){
        printf("Enter a number: ");
        scanf("%lf",&num);
        if(num<0.0){
           continue; 
    }  
    sum = sum + num; 
    }
    printf("The sum is: %.2lf",sum);
}