#include<stdio.h>
#include<math.h>
float distance(int x1,int y1,int x2,int y2);
float ar(float ab,float bc,float ca);
int main()
{
  int x1,x2,x3,y1,y2,y3,y4,x,y;
  float ab,bc,ca,pb,pc,pa ;
  float area,area_1,area_2,area_3,area_sum;
  printf("Enter coordinates of A(x1,y1):");
  scanf("%d%d",&x1,&y1);
   printf("Enter coordinates of B(x2,y2):");
  scanf("%d%d",&x2,&y2);
   printf("Enter coordinates of C(x3,y3):");
  scanf("%d%d",&x3,&y3);
  ab=distance(x1,y1,x2,y2);
  bc= distance(x2,y2,x3,y3);
  ca= distance(x3,y3,x1,y1);
  printf("Distance of side AB= %.2f\n",ab);
  printf("Distance of side BC= %.2f\n",bc);
  printf("Distance of side CA= %.2f\n",ca);
  area=ar(ab,bc,ca);
  printf("Area of the triangle with the given coordinates is: %.2f\n",area);
  printf("Enter the coordinates of point to check where it lies(1 for inside otherwise 0): ");
  scanf("%d%d",&x,&y);
  pb=distance(x,y,x2,y2);
  pc=distance(x3,y3,x,y);
  pa=distance(x,y,x1,y1);
  area_1=ar(pb,bc,pc);
  area_2=ar(pa,ab,pb);
  area_3=ar(pa,ca,pc);
  area_sum=area_1+area_2+area_3;
  printf("%.2f\n",area_sum);
  
  if (area_sum==area)
  {
      printf("1");
  }
  else if (area_sum!=area)
  {
      printf("0");
  }
  
  
}

float distance(int x1,int y1,int x2,int y2)
{
    float d,e;
    d=pow(x1-x2,2)+pow(y1-y2,2);
    e=sqrt(d);
    return e;
}

float ar(float ab,float bc,float ca)
{
    float s,area;
    s=(ab+bc+ca)/2;
    area=sqrt(s*(s-ab)*(s-bc)*(s-ca));
    return area;
}