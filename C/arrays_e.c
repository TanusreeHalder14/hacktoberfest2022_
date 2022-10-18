#include<stdio.h>
int main()
{
    int a[100],i,j,count;
    printf("Enter the size of the array: ");
    scanf("%d",&j); 
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        if(a[i]!=a[j-(i+1)])
        {
           count=0;
           break;
        }
       else if(a[i]==a[j-(i+1)])
        {
           count=1;
        }
        
    }
    if(count==1)
    {
        printf("1");
    }
    else if(count==0)
    {
        printf("0");
    }
    return 0;
}