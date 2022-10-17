import java.util.*;

 class clearmsbbit {
    static void printBin(int n) {
        for (int i = 10; i >= 0; --i) {
            System.out.print((n >> i) & 1);
        }
        System.out.println();
    }

    public static main(String[] args) {
        int n = 59;
        int i = 3; // clear till 4th bit
        int b = (n & ((1 << (i + 1)) - 1));
        System.out.println(b);
         

    }

}
