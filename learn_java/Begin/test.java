import java.util.Scanner;

public class test 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("input name : ");
        String name = sc.nextLine();        
        System.out.println("input address : ");
        String address = sc.nextLine(); 
        System.out.println("input point : ");
        Float point = sc.nextFloat();

       

        System.out.println("name : "+ name);
        System.out.println("point : "+ point);
        System.out.println("address : "+ address);

    }
}
