#include <stdio.h>
typedef struct travelagency
{
    char name[30];
    char license[15];
    char route[50];
    int distance;
} TA;

int main()
{
    // TA d1,d2,d3;
    // printf("Enter the name of 1st driver");
    // scanf("%s",&d1.name);
    // printf("Enter the license no of 1st driver");
    // scanf("%s",&d1.license);
    // printf("Enter the route of 1st driver");
    // scanf("%s",&d1.route);
    // printf("Enter the disstance travelled of 1st driver");
    // scanf("%d",&d1.distance);

    // printf("Enter the name of 2nd driver");
    // scanf("%s",&d2.name);
    // printf("Enter the license no of 2nd driver");
    // scanf("%s",&d2.license);
    // printf("Enter the route of 2nd driver");
    // scanf("%s",&d2.route);
    // printf("Enter the disstance travelled of 2nd driver");
    // scanf("%d",&d2.distance);

    // printf("Enter the name of 3rd driver");
    // scanf("%s",&d3.name);
    // printf("Enter the license no of 3rd driver");
    // scanf("%s",&d3.license);
    // printf("Enter the route of 3rd driver");
    // scanf("%s",&d3.route);
    // printf("Enter the disstance travelled of 3rd driver");
    // scanf("%d",&d3.distance);
    // printf("\nThe name of 1st driver is: %s",d1.name);
    // printf("\nThe license no of 1st driver is: %s",d1.license);
    // printf("\nThe route of 1st driver is: %s",d1.route);
    // printf("\nThe disstance travelled of 1st driver is: %d",d1.distance);
    // printf("\nThe name of 2nd driver is: %s",d2.name);
    // printf("\nThe license no of 2nd driver is: %s",d2.license);
    // printf("\nThe route of 2nd driver is: %s",d2.route);
    // printf("\nThe disstance travelled of 2nd driver is: %d",d2.distance);
    // printf("\nThe name of 3rd driver is: %s",d3.name);
    // printf("\nThe license no of 3rd driver is: %s",d3.license);
    // printf("\nThe route of 3rd driver is: %s",d3.route);
    // printf("\nThe disstance travelled of 3rd driver is: %d",d3.distance);
    TA driver[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of driver %d ", i + 1);
        scanf("%s", driver[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the license no of driver %d ", i + 1);
        scanf("%s", driver[i].license);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the route of  driver %d ", i + 1);
        scanf("%s", driver[i].route);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the distance travelled driver %d ", i + 1);
        scanf("%d", &driver[i].distance);
    }
    printf("\nThe name of 1st driver is: %s",driver[0].name);
    printf("\nThe license no of 1st driver is: %s",driver[0].license);
    printf("\nThe route of 1st driver is: %s",driver[0].route);
    printf("\nThe distance travelled by 1st driver is: %d",driver[0].distance);
    printf("\nThe name of 2nd driver is: %s",driver[1].name);
    printf("\nThe license no of 2nd driver is: %s",driver[1].license);
    printf("\nThe route of 2nd driver is: %s",driver[1].route);
    printf("\nThe distance travelled by 2nd driver is: %d",driver[1].distance);
    printf("\nThe name of 3rd driver is: %s",driver[2].name);
    printf("\nThe license no of 3rd driver is: %s",driver[2].license);
    printf("\nThe route of 3rd driver is: %s",driver[2].route);
    printf("\nThe distance travelled by 3rd driver is: %d",driver[2].distance);
}