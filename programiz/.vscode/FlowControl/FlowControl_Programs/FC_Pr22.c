//Factors of a Positive Integer
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a Integer: ");
    scanf("%d",&num);
    printf("The factors are: ");
    for(i=1;i<=num;++i){
        if(num % i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}