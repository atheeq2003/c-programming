// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
#include<stdio.h>
int main()
{
    const int maxInput = 100;
    int i;
    double number,average,sum=0.0;
    for (i=1;i <= maxInput;++i){
        printf("Enter a number: ");
        scanf("%lf",&number);
        if(number<0.0){
            goto result;
        }
        sum = sum + number;
    }
        result:
           average = sum / (i - 1);
           printf("Sum = %.2f\n",sum);
           printf("Average = %.2f", average);
           return 0;
}