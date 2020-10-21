//Check Positive or Negative Using if...else
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("It is an negative number.");
    }else{
        printf("It is an positive number");
    }
    return 0;
}