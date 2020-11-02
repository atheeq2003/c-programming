//Check Armstrong Number of n digits
#include <math.h>
#include <stdio.h>
int main() {
   int num,original,remainder,n = 0;
   float result = 0.0;
   printf("Enter an integer: ");
   scanf("%d", &num);
   original = num;
   for (original=num;original!=0;++n){
        original /= 10;
   }
   for (original=num; original!=0;original/=10){
       remainder = original % 10;
       result = result + pow(remainder, n);
   }
   if (result == num){
    printf("It is an Armstrong number.");
   }else{
    printf("It is not an Armstrong number.");
   }
   return 0;
}