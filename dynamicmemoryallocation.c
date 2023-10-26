#include <stdio.h>
#include <stdlib.h>

// ********malloc******

// int main()
// {
//     int *ptr,n;
//     printf("Enter the size of the array you want to create: ");
//     scanf("%d",&n);
//     ptr = (int *)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %dth element of the array: ",i);
//         scanf("%d",&ptr[i]);
//     }
//      for (int i = 0; i < n; i++)
//     {
//         printf("The %dth element of the array is:%d\n",i,ptr[i]);
//     }
//     return 0;
// }

int main()
{
// *******calloc*******
    int *ptr, n;
    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth element of the array is:%d\n", i, ptr[i]);
    }
// *****realloc*****
    printf("Enter the new size of the array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr , n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth element of the array is:%d\n", i, ptr[i]);
    }
    return 0;
}


