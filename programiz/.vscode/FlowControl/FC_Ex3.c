// Program to relate two integers using =, > or < symbol
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    if(a==b){
        printf("Both are equal.\n");
    }else if(a<b){
        printf("a is less than b.\n");
    }else{
        printf("a is greater than b.");
    }
    return 0;
}