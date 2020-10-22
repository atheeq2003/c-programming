//C Program to Generate Multiplication Table upto required range
#include<stdio.h>
int main()
{
    int i,num,range;
    printf("Which Multiplication Table Do You Want?\n");
    scanf("%d",&num);
    printf("Enter the range: ");
    scanf("%d",&range);
    for(i=1;i<=range;++i){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}