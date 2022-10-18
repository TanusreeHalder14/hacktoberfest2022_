#include<stdio.h>
int main()
{
    int i,j,num,isPrime;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
       if (num%i==0)
       {
           isPrime=0;
           break;
       }
       else{
           isPrime=1;
       }
      
    }
    if(isPrime==0)
    {
        printf("Given number is not prime");

    }
    if (isPrime==1)
    {
        printf("Given number is prime");
    }
   
}