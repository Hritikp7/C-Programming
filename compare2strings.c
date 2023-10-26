#include<stdio.h>
#include<string.h>
struct  student
{
    int id;
    int marks;
    char name[50];
};


int main()
{
    struct student s1,s2,s3;
    s1.id = 1001;
    s2.id = 1002;
    s3.id = 1003;
    s1.marks = 66;
    s2.marks = 77;
    s3.marks = 35;
    strcpy(s1.name , "HRITIK");
    strcpy(s2.name , "harry");
    strcpy(s3.name , "shubh");
    printf("%d\n",s1.id);
    printf("%d\n",s2.id);
    printf("%d\n",s3.id);
    printf("%s\n",s1.name);
    printf("%s\n",s2.name);
    printf("%s\n",s3.name);
    return 0;
}