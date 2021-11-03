import java.util.ArrayList;

public class Learn_Arraylist {
    public static void main(String[] args) {
        ArrayList a1 = new ArrayList();
        a1.add("Java");
        a1.add("C++");
        for (int i = 0; i < a1.size(); i++) {
            System.out.println(a1.get(i));
        }
        System.out.println("============");
        for (Object data: a1) {
            System.out.println(data);
        }

        // dùng kiểu dữ liệu cụ thể cho arraylist
        ArrayList<Double> a2 = new ArrayList<>();
        for (int i =0; i<10; i++) 
        {
            a2.add(i*2.0);
        }
        System.out.println("value of arraylist: ");
        for (Double x: a2) {
            System.out.println(x);
        }
    }
}
