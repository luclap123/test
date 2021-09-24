public class Main {
    public static void main(String[] args) {
        test a1 = new test<String>("hello world");
        test a2 = new test<Integer>(111);
        System.out.println("value : " + a1);
        System.out.println("value : " + a2);

    }    
}
