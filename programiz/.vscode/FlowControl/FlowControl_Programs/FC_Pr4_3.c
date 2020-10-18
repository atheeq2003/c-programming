//C Program to Find the Largest Number Among Three Numbers using if else ladder
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("Enter the 3rd number: ");
    scanf("%d",&c);
    if (a >= b && a >= c){
        printf("1st is greater");
    }
    else if (b >= a && b >= c){
        printf("2nd is greater");
    }
    else{
        printf("3rd is greater");
    }
}