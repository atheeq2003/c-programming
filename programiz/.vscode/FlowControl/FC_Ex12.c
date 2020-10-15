// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result
#include<stdio.h>
int main()
{
    double i,num,sum=0;
    for(i=1;i<6;++i){
        printf("Enter a number: ");
        scanf("%lf",&num);
        if(num<0.0){
           continue; 
    }  
    sum = sum + num; 
    }
    printf("The sum is: %.2lf",sum);
}