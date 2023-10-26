// // call by value
// #include <stdio.h>
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     // this will swap the nos in only the swap functionn and not in the main function
//     // printf("After swapping:\n");
//     // printf("a = %d\nb = %d\n", a, b);
// }

// int main()
// {
//     int a = 10, b = 20;
//     printf("Before swapping:\n");
//     printf("a = %d\nb = %d\n", a, b);
//     swap(a, b);
//     // this does not swap the number as just the values of a and b are copied
//     //  printf("After swapping:\n");
//     //  printf("a = %d\nb = %d\n",a,b);
//     return 0;
// }
// call by reference
#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    swap(&a, &b);
    // this will swap the number as address of  the values of a and b are being passed
    printf("After swapping:\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}