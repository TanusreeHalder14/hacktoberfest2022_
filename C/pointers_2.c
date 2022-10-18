#include<stdio.h>
int calc(int a,int b,int c,float *avg,float *per);
int main()
{
  int s1,s2,s3;
  float avg,per;
  printf("Enter the marks obtained in three subjects: ");
  scanf("%d%d%d",&s1,&s2,&s3);
  calc(s1,s2,s3,&avg,&per);
  printf("Average= %.2f\n",avg);
  printf("Percentage= %.2f",per);
  return 0;
}

int calc(int a,int b,int c,float *avg,float *per)
{
    *avg=(a+b+c)/3;
    *per=*avg;
}