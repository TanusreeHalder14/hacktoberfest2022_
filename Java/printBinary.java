import java.util.*;
public class printBinary {
    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(int i=10;i>=0;--i)
       {
        System.out.print((n>>i)&1);
    }
    System.out.println();
       sc.close();
    }
    
}
