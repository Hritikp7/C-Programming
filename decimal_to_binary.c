#include<stdio.h>

int main()
{
    int num,i,r[10];
    printf("Enter a number for binary conversion");
    scanf("%d",&num);
    for ( i = 0; num>0; i++)
    {
        /* code */
        r[i] = num % 2;
        num = num/2;
    }
    for ( i = i-1; i >= 0; i--)
    {
        printf("%d",r[i]);
    }
    return 0;
    
}