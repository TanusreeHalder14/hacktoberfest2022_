#include<stdio.h>
int prime(int a);
int main()
{
    int num,factors;
    scanf("%d",&num);
     printf("The factors of %d are= ",num);
    factors=prime(num);
    
    return 0;
}
int prime(int a)
{
    int i,j,isPrime;
    
    for(i=2;i<=a;)
    {
        if (a%i==0)
        {
            a/=i;
            printf("%d.",i);
        }
         else
         {
             i+=1;
         }
        }
        return i;
       
    }
    
