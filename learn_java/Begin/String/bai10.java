package String;

import java.util.Arrays;

public class bai10 {
    public static void main(String[] args) {
        int a[] = new int [] {5,3,23,64,993,93,100};
        int b[] = new int [10];

        // hàm in giá trị ban đầu
        System.out.println("currently array a : "+ Arrays.toString(a));

        // hàm sắp xếp mảng tăng dần 
        Arrays.sort(a);
        System.out.println("now array a : "+ Arrays.toString(a));

        // hàm tìm kiếm trong mảng (chỉ tìm kiếm được khi mảng đã dược sắp xếp )
        System.out.println("find location 64 in: " +Arrays.binarySearch(a,64));
        System.out.println("find location 0 in: " +Arrays.binarySearch(a,0));

        // hàm tự động điền giá trị cho một mảng
        Arrays.fill(b,10);
        System.out.println("now array b : "+ Arrays.toString(b));

        // hàm sắp xếp giảm dần
        Arrays.sort(a);
        a = bai10.ab(a);
        System.out.println("now array a : "+ Arrays.toString(a));
        

    }
    public static int[] ab (int x[])
    {
        int test[] = new int [x.length];
        int index = 0;
        for (int i=x.length-1; i>=0; i--)
        {
            test[index] = x[i];
            index++;	
        }
        return test;
    }
}
