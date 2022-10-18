#include<stdio.h>
#include<stdlib.h>
int swap(int *a, int *b);
int main()
{
    int a[100],i,n,x;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElements you entered are: ");
    for(i=0;i<n;i++)
    {
         printf("%d,",a[i]);
    }
    printf("\nAfter interchanging the odd and even elements:\n ");
    if(n%2==0)
    {
    for(i=0;i<n;i=i+2)
    {
       swap(&a[i],&a[i+1]);
    }
    }
    if(n%2!=0)
    {
       for(i=0;i<n-1;i=i+2)
    {
       swap(&a[i],&a[i+1]);
    } 
    }
    for(i=0;i<n;i++)
    {
         printf("%d,",a[i]);
    }
    return 0;
    
}

int swap(int *a, int *b)
{
    int *x;
    x=*a;*a=*b;*b=x;
   
}