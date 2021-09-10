import java.util.Scanner;

public class bai5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a,b;
        System.out.print("input a : ");
        a = sc.nextInt();
        System.out.print("input b : ");
        b = sc.nextInt();
        if (a>b) 
        {
            System.out.println("error");
        }
        else
        {
            for (int i = a; i < b; i++) 
            {
                System.out.println(i);
            }
        }
        
    }
}
