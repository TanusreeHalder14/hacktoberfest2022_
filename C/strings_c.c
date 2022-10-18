#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char sen[100];
int i,j,k;
printf("Enter your sentence. (Less than 100 chracters)\n\n");
gets(sen);
printf("After how many characters you want to extract the line : ");
scanf("%d", &i);
printf("Upto what length you want to extract the line: ");
scanf("%d",&k);
if(k==0)
{
  for(j=i-1;j<=strlen(sen);j++)
{
    printf("%c",sen[j]);
   
}  
}
if(k!=0)
{
for(j=i-1;j<i-1+k;j++)
{
    printf("%c",sen[j]);
   
}
}
return 0;
}