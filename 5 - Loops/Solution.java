import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        in.close();

        for (int i = 1; i < 11; i++) {
            System.out.println(N + " x " + i + " = " + N * i);
        }
    }
}
