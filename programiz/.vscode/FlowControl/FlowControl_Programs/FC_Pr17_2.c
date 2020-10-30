//Power Using pow() Function
#include<math.h>
#include<stdio.h>
int main()
{
    double base,exp,result;
    printf("Enter the Base: ");
    scanf("%lf",&base);
    printf("Enter the Exponent: ");
    scanf("%lf",&exp);
    result = pow(base,exp);
    printf("The Power is: %.2lf",result);
    return 0;
}