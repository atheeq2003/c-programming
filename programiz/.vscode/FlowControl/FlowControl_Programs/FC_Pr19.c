//Program to check Prime Number
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i <= n;++i){
        if(n % 2 == 0)
        flag = 1;
        break;
    }if(n == 1){
        printf("1 is neither Prime or Composite. ");
    }else{
        if(flag == 0){
            printf("It is a Prime Number. ");
        }else{
            printf("It is not a Prime Number. ");
        }
    }
    return 0;
}