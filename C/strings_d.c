#include<stdio.h>
#include<string.h>
int main()
{
    char sen[20];
    int i;
    gets(sen);
    for(i=1;i<strlen(sen)-1;i++)
    {
        printf("%c",sen[i]);
    }
    return 0;
}