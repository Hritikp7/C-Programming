#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("THe factorial of %d is %d",num,fact);
    return 0;
}