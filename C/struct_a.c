#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[25];
        char dept[10];
        char course[20];
        int year;
    };
    struct student s[5];
    int i,dh,k;
    for(i=0;i<5;i++)
    {
        printf("Enter Roll,Name,Department,Course,Year: ");
        scanf("%d%s%s%s%d",&s[i].roll,&s[i].name,&s[i].dept,&s[i].course,&s[i].year);
        while((dh=getchar())!='\n');
    }
    printf("Enter Year: ");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k==s[i].year)
        {
            printf("%s\n",s[i].name);
        }
    }
    return 0;
    }