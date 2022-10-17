import java.util.*;
public class countbits {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ct=0;
        int n=sc.nextInt();
        for(int i=31;i>=0;i--)
        {
            if((n & (1<<i))!=0)
            ct++;
        }
        System.out.println(ct);
    }
    
}
