//GCD Using while loop and if...else Statement
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the 1st integer: ");
    scanf("%d",&n1);
    printf("Enter the 2nd integer: ");
    scanf("%d",&n2);
    while(n1 != n2){
        if(n1 > n2){
            n1 = n1 - n2;
        }else{
            n2 = n2 -n1;
        }
    }
    printf("GCD = %d",n1);
    return 0;
}