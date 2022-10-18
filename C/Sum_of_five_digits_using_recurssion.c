#include<stdio.h>
#include<conio.h>
int rec_sum(int a);
int non_rec_sum(int b);
int main()
{
    int num,sum,r_sum;
printf("Enter the five digit number: ");
scanf("%d",&num);
r_sum=rec_sum(num);
printf("Sum of five digits number by recursion is: %d\n",r_sum);

sum=non_rec_sum(num);
printf("Sum of five digits number by non recursion is: %d",sum);
return 0;
}

int rec_sum(int a)
{
    
    int sum1=0,x;
    if (a==0)
    {
        return 0;
    }
    else
    {
         x=a%10;
    sum1=x+rec_sum((a/10));
    return sum1;
    }
}

int non_rec_sum(int b)
{
     int i,sum=0,t;
     for(i=0;i<5;i++)
     {
        t=b%10;
        sum+=t;
        b/=10;
        
     }
     return sum;
}