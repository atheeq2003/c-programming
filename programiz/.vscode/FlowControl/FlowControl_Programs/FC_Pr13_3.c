//GCD for both positive and negative numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    int abs(int n1);
    int abs(int n2);
    printf("Enter the first integer: ");
    scanf("%d",&n1);
    printf("Enter the second integer: ");
    scanf("%d",&n2);
    abs(n1);
    abs(n2);
    while(n1 != n2){
        if(n1 > n2){
            n1 = n1 - n2;
        }else{
            n2 = n2 -n1;
        }
    }
    return 0;
}