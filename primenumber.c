#include <stdio.h>

int main()
{
    int num, flag = 0,m;
    printf("enter the number to check whether the given number is a prime number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("The entered number is not a prime number");
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The entered number is a prime number");
    }
    return 0;
}