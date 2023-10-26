#include<stdio.h>
 
int main()
{
    int num,a,r,temp;
    printf("Enter a number to check whether the given number is palindrome or not: ");
    scanf("%d",&num);
    temp = num;
    while (num>0)
    {
        r = num % 10;
        a = (a * 10) + r;
        num = num/10;
    }
    if (temp == a)
    {
        printf("The number is a palindrome number ");
    }
    else
    {
        printf("The number is not a palindrome number ");
    }
    
    return 0;

}
