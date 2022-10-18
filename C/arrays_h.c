#include<stdio.h>
int main()
{
    int a[25],i,j;
    printf("Enter 25 numbers: ");
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
        {
            if(a[j]>a[j+1])
            {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    for(i=0;i<25;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;
}