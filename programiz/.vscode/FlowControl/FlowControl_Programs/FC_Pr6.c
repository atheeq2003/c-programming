//Program to Check Leap Year
#include<stdio.h>
int main()
{
    int year,result1,result2,result3;
    printf("Enter a year: ");
    scanf("%d",&year);
    result1 = year % 400;
    result2 = year % 100;
    result3 = year % 4;
    if(result1 == 0){
        printf("It is a Leap Year.");
    }else if(result1 == result2){
        printf("It is a Leap Year.");                                  
    }else if(result3 == result2 == result3 == 1){
        printf("It is a Leap Year.");
    }else{
        printf("It is not a Leap Year.");
    }
    return 0;
}