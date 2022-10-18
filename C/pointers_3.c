#include<stdio.h>
#include<conio.h>

#include<math.h>
int fact(int i);
int main()
{
    float sum=0.0;
    int i;
    float x,y;
    
    scanf("%f",&x);
    printf("sin(%f)= ",x);
    y=x*3.14159/180;
    for(i=1;i<=10;i++)
    {
     sum+=((pow(-1,i+1)*pow(y,2*i-1))/fact(2*i-1));
    }
    printf("%.2f",sum);
    return 0;
}

int fact(int i)
{
    int j,pro=1;
    for(int j=i;j>0;j--)
    {
      pro*=j;
      
    }
    
    return pro;
}