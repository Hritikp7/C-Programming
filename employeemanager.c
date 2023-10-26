#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i = 0;
    char* ptr;

    while (i<3)
    {
        
    printf("Enter the number of characters in empolyee %d id:",i+1);
    scanf("%d",&num);
    ptr = (char*) malloc(num*sizeof(char));
    printf("Enter your employee id : ");
    scanf("%s",ptr);
    printf("Your employee id is: %s",ptr);
    free(ptr);
    i=i+1;
    }
    
    return 0;
}