// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    for(i=1;i<10;++i){
        if(num>0){
            printf("Enter a number: ");
            scanf("%d",&num);
            sum = sum + num;
        }   
    }
    printf("The sum is: %d",sum);
}
