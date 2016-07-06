import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int da = in.nextInt();
        int ma = in.nextInt();
        int ya = in.nextInt();

        int de = in.nextInt();
        int me = in.nextInt();
        int ye = in.nextInt();

        int fine = 0;

        if (ya > ye) fine = 10000;
        else if (ya == ye) {
            if (ma > me) fine = (ma - me) * 500;
            else if (ma == me && da > de) fine = (da - de) * 15;
        }

        System.out.println(fine);
    }
}
