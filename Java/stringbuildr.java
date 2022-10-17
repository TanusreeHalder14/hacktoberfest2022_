import java.util.*;
public class stringbuildr {
    public static void main(String args[])
    {
       StringBuilder sb=new StringBuilder("Tony");
       System.out.println(sb);
       //char at index 0
       System.out.println(sb.charAt(0));

       //set character at index 0
       sb.setCharAt(0,'P');
       System.out.println(sb);

       //Insert at index
       sb.insert(0,'S');
       System.out.println(sb);
       
       //delete the extra charecter(end index is not included)
       sb.delete(2,3);
       System.out.println(sb);
    }
    
}
