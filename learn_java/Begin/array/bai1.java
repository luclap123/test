package array;

import java.util.Scanner;

public class bai1 {
    public static void main(String [] args)
    {
        int n;
        int a[];
        Scanner sc = new Scanner (System.in);
        System.out.print("input n : ");
        n=sc.nextInt();
        a= new int[n];
        for (int i=0; i<n; i++)
        {
            System.out.print("input number "+ i + ": ");
            a[i]= sc.nextInt();
        }
        int s=0;
        for (int i=0; i<n; i++)
        {
            s += a[i];
        }
        System.out.println("sum of array : " + s);
        
    }
}
