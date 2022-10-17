import java.util.*;
class Strings                   
    {
        public static void main(String args[])   //main function in C is called method here
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
