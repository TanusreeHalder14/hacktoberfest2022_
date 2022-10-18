#include<stdio.h>
int main()
{
    int m,n,a[20],b[20],i,j,k,l;
    printf("Enter the size of both arrays: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array 1: ");
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("Enter the elements of array 2: ");
    for(j=0;j<n;j++)
    {
    scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          if(a[i]==b[j])
          {
            k=a[i];
            for(i=0;i<m;i++)
             {
                 if (a[i]!=k)
                 {
                     printf("%d,",a[i]);
                 }
             }
             for(j=0;j<n;j++)
             {
                 if(b[j]!=k)
                 {
                     printf("%d,",b[j]);
                 }
             }
          }
        
      }
    }
    
    return 0;
}