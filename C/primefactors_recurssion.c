#include<stdio.h>
int prime(int a);
int main()
{
    int i,num;
    scanf("%d",&num);
    prime(num);
    return 0;
}

int prime(int a)

{
    int i,j;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d,",i);
            break;
        }
        
    }
    prime(a/i);
}