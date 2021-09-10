package String;

public class bai9 {
    public static void main(String[] args) {
        String a =" lUc VAn ";
        String a1 = "lap ";

        // hàm nối chuỗi 
        System.out.println("conect : " + a1.concat(a));

        // hàm thay thế
        String b = a.replaceAll("luc van","kim");
        System.out.println("b = "+b);

        // hàm chuyển về viết hoa
        System.out.println("change "+ a.toLowerCase());
        System.out.println("change "+ a.toUpperCase());

        // hàm xóa khoảng trắng dư thừa
        String c= "  hom nay troi mua to hon hom qua  ";
        System.out.println(c.trim());

        // hàm cắt chuỗi con 
        System.out.println(c.substring(5));
        System.out.println(c.substring(5,12));

    }
}
