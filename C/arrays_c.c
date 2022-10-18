#include<stdio.h>
int main()
{
    int a[25],i,k,isThere=0,count=0;
    printf("Enter 25 numbers: ");
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&k);
    for(i=0;i<25;i++)
    {
        if(k==a[i])
        {
          isThere=1;
          break;
        }
    }
    if(isThere==1)
    {
        printf("The entered number is present in the array\n");
    }
    if(isThere==0)
    {
        printf("The entered number is not present in the array\n");
    }
    for(i=0;i<25;i++)
    {
        if(k==a[i])
        {
          count+=1;
        }
    }
    printf("The number of times %d is there in the array is:%d",k,count);
    return 0;
    
}