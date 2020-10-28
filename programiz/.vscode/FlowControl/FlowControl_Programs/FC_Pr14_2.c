//LCM Calculation Using GCD
#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("Enter the first integer: ");
    scanf("%d",&n1);
    printf("Enter the second integer: ");
    scanf("%d",&n2);
    for (i = 1; i <= n1 && i <= n2; ++i){
         if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }   
    lcm = (n1 * n2) / gcd;
    printf("The LCM is: %d.",lcm);
    return 0;
}