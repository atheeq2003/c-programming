//Check Positive or Negative Using Nested if...else
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=0){
        if(num == 0){
            printf("You've enterd 0 (NON NEGATIVE NUMBER) ");
        }else{
            printf("It is an negative number.");
        }
    }else{
        printf("It is an positive number.");
    }
    return 0;
}