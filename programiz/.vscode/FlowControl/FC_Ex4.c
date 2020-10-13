//Nested if...else: relate two integers using either <, > and =
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    if(a >= b){
        if(a == b){
            printf("Both are Equal.");
        }else{
            printf("a is greater than b.");
        }
    }else{
        printf("a is less than b.");
    }
    return 0;
}