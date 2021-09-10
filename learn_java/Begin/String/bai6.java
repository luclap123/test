package String;

import java.util.Scanner;

public class bai6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String n;
        System.out.print("input n : ");
        n = sc.nextLine();
        System.out.println("length of text : "+n.length());
        //lấy một kí tự bất kì
        // int s = n.length();
        // for (int i = 0; i < s; i++) 
        // {
        //     System.out.print("location "+s.charAt(i));
        // }
            
        char a[] = new char [10];
        n.getChars(2,3,a,0);
        for (int i = 0; i < a.length; i++) 
        {
            System.out.println("location : "+a[i]);
        } 

        byte [] array = n.getBytes();
        for (Byte b : array)
        {
            System.out.println(b);
        }
    }
}
