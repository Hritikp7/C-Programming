#include<stdio.h>

int main()
{
    system("cls");
    int num, r, rev = 0, temp;
    printf("Enter a number you want to reverse: ");
    scanf("%d",&num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        rev = rev*10+r;
        num = num / 10;
    }
    printf("The reverse of %d is: %d", temp, rev);
    return 0;
}