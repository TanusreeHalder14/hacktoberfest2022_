#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    
    int var1 = n ; 
    int var2 = n ; 
    int sum = 0 ;
    int count = 0 ; 
     
    while(n)
    {
        count++ ; 
        n = n/10 ; 
    }

   

    while(var1)
    {
        int rem = var1 % 10 ; 
        sum = sum + pow(rem , count) ; 
        var1 = var1 / 10 ; 
    } 

    

    if(var2 == sum) 
    printf("%d is an Armstrong Number" , var2) ; 
    
    else 
    printf("%d is not an Armstrong number" , var2) ;

     return 0;
}