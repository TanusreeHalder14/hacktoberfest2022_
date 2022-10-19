//Java Program to show the frequency of each digit in the given array

import java.util.*;
public class Frequency
{
    // instance variables 
    public static int a[];

    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no of elements: ");
        int n=sc.nextInt();//storing the number of elements
        System.out.println("Enter the elements: ");
        a=new int[n];//creating a new array
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();//storing the elements
        search(0);
    }

    public void search(int n)//variable for storing the ascending digits
    {
        if(n==10)//if all are checked
            System.out.println();
        else{
            frequency(n);
            search(n+1);
        }
    }

    public void frequency(int n)//variable for storing the ascending digits
    {int c=0;
        for(int i=0;i<a.length;i++)
        {
            int f=a[i];
           
            while(f!=0)
            {
                int t=f%10;
                if(t==n)//checking if the digit is present 
                    c++;
                f=f/10;
            }
        }
        if(c!=0)//if the digit is present in the array
            System.out.println(n+"->"+c);

    }

    public static void main(String[]args)
    {
        Frequency obj=new Frequency();
        obj.accept();
    }
}