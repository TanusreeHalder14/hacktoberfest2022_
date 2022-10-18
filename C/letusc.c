
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int i,n,mul=1,k,a,b,c,flag=0;
   while(1){
       printf("Operation you want to do(4 for exit): ");
       scanf("%d",&i);
       switch(i)
       {
           case 1 :
           printf("Enter the number for finding factorial: ");
           scanf(" %d",&a);
           for(n=1;n<=a;n++)
           {
               mul*=n;
           }
           printf("Factorial of %d is: %d \n",a,mul);
           break;
           
           case 2 :
           printf("Enter the number for finding prime or not: ");
           scanf(" %d",&b);
           for(i=2;i<b;i++)    
{    
if(b%i==0)    
{    
printf("Number is not prime\n");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime\n"); 
break;

           
           case 3:
           printf("Enter the number for finding odd or even: ");
           scanf(" %d",&c);
           if(c%2==0)
           {
               printf("Given number is even \n");
           }
           else
           {
               printf("Given number is odd \n");
           }
           break;
           case 4 :
           exit(0);
       }
   }
   return 0;
}