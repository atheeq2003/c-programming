//LCM using while and if
#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter the first integer: ");
    scanf("%d",&n1);
    printf("Enter the second integer: ");
    scanf("%d",&n2);
    max = (n1 > n2) ? n1 : n2;
    while(1){
        if(max % n1 == 0 && max % n2 == 0){
            printf("The LCM is: %d",max);
            break;
        }
        ++max;
    }
    return 0;
    }