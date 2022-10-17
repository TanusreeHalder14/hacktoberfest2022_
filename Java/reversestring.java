public class reverse {
    public static void main()
    {
        StringBuilder sb=new StringBuilder("hello");
        for(int i=0;i<sb.length();i++)
        {
            int front=i;
            int back=sb.length()-1-i;

            char frontchar=sb.charAt(front);
            char backchar=sb.charAt(back);

            sb.setCharAt(front,backchar);
            sb.setCharAt(back,frontchar);
        }
        System.out.println(sb);
    }
    
}
