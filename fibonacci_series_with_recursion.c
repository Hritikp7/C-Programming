#include<stdio.h>
int FibSeries(int);

int main()
{
    int num,n;
    printf("Enter the number for how digits do you want to print: ");
    scanf("%d",&num); 
    FibSeries(num);
     
}
int FibSeries(int n)
{
    static int n1 = 0,n2 = 1,n3;
    if(n>0)
    {
    n3 = n1 + n2;
    printf("%d",n3);
    n1 = n2;
    n2 = n3;
    return FibSeries(n-1);
    }
    
}