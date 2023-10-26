#include<stdio.h>
int FibonacciSeries(int,int,int);

int main()
{
    int n1=0,n2=1,num;
    printf("Enter the number for how digits do you want to print: ");
    scanf("%d",&num);
    FibonacciSeries(num,n1,n2);
}
int FibonacciSeries(int num,int n1,int n2)
{
   int n3;
   printf("the fibonacci series is:\n ");
   printf("%d\n%d",n1,n2);
   for (int i = 0; i < num-2; i++)
   {
   n3 = n1 + n2;
   n1 = n2;
   n2 = n3; 
   printf("\n%d",n3);
   }

   
    
}