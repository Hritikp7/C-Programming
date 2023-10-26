#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0, index = 0;
    printf("%d",strlen(string));
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    printf("%d",strlen(string));
    while (string[strlen(string)-1] == ' ')
    {
        string[strlen(string) -1] = '\0';
    }

    
}

int main()
{
    char str[] = "<h1>  My name is Hritik  </h1>";
    parser(str);
    printf("the parsed string is ~~%s~~", str);
    return 0;
}