#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    gets(str);
    // scanf("%s",&str);
    printf("%d",strlen(str));
    printf("%s",str);
    return 0;
}