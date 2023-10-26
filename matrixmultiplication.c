#include <stdio.h>

int main()
{
    system("cls");
    int a[10][10], b[10][10], mult[10][10], i, j, k, r, c;
    printf("enter the number of rows");
    scanf("%d", &r);
    printf("enter the number of columns");
    scanf("%d", &c);
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
     for (i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
    mult[i][j] = 0;
            for ( k = 0; k < c ; k++)
            {
                mult[i][j] = mult[i][j] + a[i][k]*b[k][j];
            }
            
             
        }
    }
for(i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
}
