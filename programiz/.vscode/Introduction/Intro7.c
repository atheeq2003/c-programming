//C Program to Find the Size of int, float, double and char
#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("The size of int is: %d\n",sizeof(a));
    printf("The size of float is: %d\n",sizeof(b));
    printf("The size of double is: %d\n",sizeof(c));
    printf("The size of char is: %d",sizeof(d));
    return 0;
}