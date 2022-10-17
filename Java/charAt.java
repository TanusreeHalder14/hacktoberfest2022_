import java.util.*;
public class charAt                    
    {
        public static void main(String args[])
        {
            String firstname="Tony";
            String lastname="Stark";
            String fullname=firstname+" "+lastname;
            System.out.println(fullname.length());
            for(int i=0;i<fullname.length();i++)
            {
                System.out.println(fullname.charAt(i));
            }
        }
    }
