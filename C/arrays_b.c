#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,k;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<k;i++)
    printf("%d  ",a[i]);*/
    for(i=0,j=(k-1);i<k && j>=0;i++,j--)
    {
        b[j]=a[i];
    }
    printf("\n");
    for(j=0;j<k;j++)
    {
        printf("%d  ",b[j]);
    }
    return 0;
}