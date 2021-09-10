package array;

import java.util.Arrays;

public class bai2 {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5, 6};
        System.out.println(Arrays.toString(a)); // in mảng

        // copy mảng cách 1 (làm thay đổi giá trị ban đầu của mảng)
        int b[] = a;
        System.out.println(Arrays.toString(b)); // in mảng
        
        // copy mảng dùng clone (hàm clone làm không làm thay đổi giá trị mảng ban đầu, khi thay đổi giá trị)
        int c[]=a;
        c[2]=100;
        System.out.println(Arrays.toString(c)); // in mảng

        // copy mảng dùng System.arraycopy
        int d[] = new int[a.length];
        System.arraycopy(a, 0, d, 0, a.length);
        d[4]=10;
        System.out.println(Arrays.toString(d));
    }
}
