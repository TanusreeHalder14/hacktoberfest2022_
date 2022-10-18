#include<stdio.h>
#include<math.h>
#include<conio.h>
int calc(int a,int b,int c,int d,int e,int *sm,float *avg,float *sd);
int main()
{
   int n1,n2,n3,n4,n5;
   int sm;
   float avg,sd;
   scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
   calc(n1,n2,n3,n4,n5,&sm,&avg,&sd);
   printf("Sum= %d\n",sm);
   printf("Average= %.2f\n",avg);
   printf("Standard deviation= %f",sd);
   return 0;
}

int calc(int a,int b,int c,int d,int e,int *sm,float *avg,float *sd)
{
    float s;
    *sm=(a+b+c+d+e);
    *avg=*sm/5;
    s=pow(a-*avg,2)+pow(b-*avg,2)+pow(c-*avg,2)+pow(d-*avg,2)+pow(e-*avg,2);
    *sd=sqrt(s/5);
}