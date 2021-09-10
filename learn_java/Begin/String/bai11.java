package String;
import java.util.Arrays;
public class bai11 {
    public static void main (String args[]) 
    {
        String s= "hello, my name is lap, i am come from vietnam ";
        // tách chuỗi thành các phần tử 
        String []a= s.split(" ");
        for (int i=0; i<a.length; i++) 
        {
            System.out.print("\t"+ a[i]);
        }
        System.out.println();
        String []b = s.split(",");
        System.out.println(Arrays.toString(b));

        String a1 ="my name is lucy, i am engine. who are you ";
        String[] a2 = a1.split("\\.|\\,");
        System.out.println(Arrays.toString(a2));

        String b1 ="nguyen van a";
        String b2[]=b1.split(" ");
        System.out.println(b2[b2.length-1]);
    }
}
