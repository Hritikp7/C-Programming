#include <stdio.h>

int main()
{
    int num, r, sum = 0, temp;
    printf("Enter a number to calculate sum of each digit imn the number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("sum of each digit in the number in %d is: %d", temp, sum);
    return 0;
}