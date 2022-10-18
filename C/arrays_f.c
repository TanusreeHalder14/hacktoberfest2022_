#include<stdio.h>
int main()
{
    int i,a[25],min;
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0] ;
     for(i=0;i<25;i++)
     {
        if(a[i]<min)
         {
            min=a[i];
         }
     }
     printf("%d",min);
     return 0;

}