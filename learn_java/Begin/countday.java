import java.util.Scanner;

public class countday {
    public static void main(String[] args)
    {
        int day,years;
        Scanner sc = new Scanner (System.in);
        System.out.println("input month : ");
        day = sc.nextInt();
        System.out.println("input year : ");
        years = sc.nextInt();

        switch (day)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                System.out.println("there are 31 days");
                break;
            }
            case 2:
            {
                if ((years%4==0 && years% 100 !=0) || (years%400==0))
                {
                    System.out.println("leap year there are 29 days");
                } 
                else
                {
                    System.out.println("there are 28 days");
                }
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                System.out.println("there are  30 days");
                break;
            }
            default:
            {
                System.out.println("the value you input is wrong");
                break;
            }

        }
    }
}
