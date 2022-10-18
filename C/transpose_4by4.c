#include<stdio.h>
int main()
{
    int a[4][4],trans[4][4];
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           trans[i][j]=a[j][i];
        }
    }
     for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d\t",trans[i][j]);
        }
    }
}