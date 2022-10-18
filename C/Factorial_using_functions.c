#include<stdio.h>
int fact(int a);
int main()
{
   int num,result;
   printf("Enter the number= ");
   scanf("%d",&num);
   result=fact(num);
   printf("Factorial of the number entered= %d",result);
   return 0;
}
 int fact(int a)
{
    int b=1,i;
    for(i=a;i>=1;i--)
    {
      b*=i;
    }
    return (b);
}