import java.util.*;
public class BCS148
{
    
    public static void main(String args[])
    {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int a[][]=new int [n][n];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
           a[i][i+j]=n-i;
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            System.out.print(a[i][j]);
            System.out.print(" ");
        }
        System.out.println();
      }

      
    }
}