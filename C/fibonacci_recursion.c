#include<stdio.h>
int fibonacci(int a,int b,int term);
int main()
{
    int num1,num2;
    printf("Enter first two numbers of sequence:");
    scanf(" %d%d",&num1,&num2);
    printf("%d,%d,",num1,num2);
    fibonacci(num1,num2,23);
    return 0;
}

int fibonacci(int a,int b,int term)
{
    if(term==0)
    {
        return;
    }
    int sum,i;
    sum=b+a;
    printf("%d,",sum);
    
    fibonacci(b,sum,term-1);
    
}