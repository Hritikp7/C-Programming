#include <stdio.h>
int FibonacciSeries(int);

int main()
{
    int num;
    printf("Which term of the fibonacci series is to be calculated: ");
    scanf("%d", &num);
    FibonacciSeries(num);
}
int FibonacciSeries(int num)
{
    int n1,n2;
    printf("Enter the first two terms of the fibonacci series");
    scanf("%d %d",&n1,&n2);
    int n3;
    printf("the %dth term of the fibonacci series is ",num);
    for (int i = 0; i < num - 2; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    printf("%d", n3);
    return 0;
}