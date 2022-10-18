#include<stdio.h>
#include<math.h>
int gcd(int a, int b);
int main()
{
    int k,j,r;
    printf("Enter two numbers(Greater first): ");
    scanf("%d%d",&k,&j);
    r=gcd(k,j);
    printf("%d",r);
    
    return 0;
}

int gcd(int a, int b)
{
    int rem,k,quo;
    rem=a%b;
    quo=a/b;
    if (rem==0)
    {
        return b;
    }
    else
    {
      k=a-quo*b;
      gcd(b,k);
    }
}