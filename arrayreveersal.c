// #include <stdio.h>

// int main()
// {
//     int a[100], i, num;
//     printf("How may numbers do you want to store in the array: ");
//     scanf("%d", &num);
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("The elements are: ");
//     for (i = 0; i < num; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("The reverse of the array is: ")
//     for (i = i - 1; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
#include <stdio.h>

void array_reverse(int array[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int arr[50], i, num;
    printf("How many numbers do You want to add in the array: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    array_reverse(arr, num);
    return 0; 
}