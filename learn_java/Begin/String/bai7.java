package String;
public class bai7 {
    public static void main(String[] args) {
        String a = "luc van lap";
        String a1 = "luc van lap";
        String a2 ="Luc Van Lap";
        
        // hàm so sánh hai chuỗi, phân biệt chữ hoa chữ thường
        System.out.println("a equals a1 : "+a.equals(a1));
        System.out.println("a equals a2 : "+a.equals(a2));

        // hàm so sánh hai chuỗi, không phân biệt chữ hoa chữ thường
        System.out.println("a equalsIgnoreCase a1 : "+a.equalsIgnoreCase(a1));
        System.out.println("a equalsIgnoreCase a2 : "+a.equalsIgnoreCase(a2));

        // hàm so sánh (đưa ra giá trị lớn hơn, bé hơn hoặc bằng nhau), phân biệt chữ hoa chữ thường 
        String b="A";
        String b1="B";
        String b2="C";
        String b3="a";
        System.out.println("a compare to : "+b.compareTo(b2));
        System.out.println("a compare to : "+b.compareTo(b1));

        // hàm so sánh (đưa ra giá trị lớn hơn, bé hơn hoặc bằng nhau), không phân biệt chữ hoa chữ thường 
        System.out.println("a compare to ignore case : "+b.compareToIgnoreCase(b3));

        // hàm so sánh một đoạn mong muốn
        String c1 ="tran ha mi";
        String c2 ="ha mi";
        boolean check = c1.regionMatches(5,c2,0,5);
        System.out.println(check);

        // hàm kiểm tra chuỗi bắt đầu bằng
        String sdt ="12345678";
        System.out.println(sdt.startsWith("231"));
        System.out.println(sdt.startsWith("123"));

        // hàm kiểm tra chuỗi kết thúc bằng
        String name ="meo meo.jpk";
        System.out.println(name.endsWith(".jpk"));
        System.out.println(name.endsWith(".jpo"));

        
    }
}
