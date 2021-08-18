import java.util.Scanner;

public class bai4 {
        public static void main(String[] args)
        {
            int a[];
            int n;
            Scanner sc = new Scanner (System.in);
            System.out.print("input n : ");
            n= sc.nextInt();
            a= new int [n];
            for (int i=0; i<n; i++)
            {
                System.out.print("input "+i+": ");
                a[i]= sc.nextInt();
            }
            max(a,n);

        }
        static void max(int a[], int n)
        {
            int Max = a[0];
            for (int i = 0; i <n; i++) 
            {
                if (a[i]>Max)
                {
                    Max = a[i];
                }
            }
            System.out.println("max of array is : " + Max);
        }
}
