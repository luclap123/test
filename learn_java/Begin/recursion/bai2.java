package recursion;

import java.util.Scanner;

public class bai2 {
    public static void main(String [] args)
    {
        // Scanner sc = new Scanner (System.in);
        // System.out.print("input : ");
        // long a = sc.nextLong();
        long s=result(4,5);
        System.out.println(s);
    }

    public static long result(long m, long n)
    {
        if (m==0)
        return n+1;
        if (n==0)
        return result(m-1,1);
        else
        return result(m-1,result(m,n-1));
    }
}
