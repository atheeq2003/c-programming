//C Program to Check Armstrong Number
#include<stdio.h>
int main()
{
    int n,original,remainder,result=0;
    printf("Enter Three Numbers: ");
    scanf("%d",&n);
    original=n;
    while(original != 0){
        remainder = n % 10;
        result = result * remainder * remainder * remainder;
        original = original / 10;
    }if(original == result){
        printf("It is an Armstrong Number: ");
    }else{
        printf("It is not an Armstrong Number: ");
    }
    return 0;
}