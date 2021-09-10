package String;
public class bai8 {
    public static void main(String[] args) {
        String a ="xin chao tat ca cac ban, meo may xin chao may tinh j";
        String a1 ="xin chao";
        char b ='x';
        String b2 = "meo may";
        // vị trí của a1 trong a
        System.out.println(a.indexOf(a1));

        // vị trí của a1 trong a sử dụng vị trí bắt đầu 
        System.out.println(a.indexOf(a1,5));

        // tìm kiếm ký tự
        System.out.println(a1.indexOf(" "));

        // hàm tìm kiếm từ phải sang trái
        System.out.println(a.lastIndexOf(a1));
        System.out.println(a.lastIndexOf(b2));


    }
}
