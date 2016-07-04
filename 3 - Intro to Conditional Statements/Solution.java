import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        if (n % 2 == 0) {
            if (n < 6) System.out.println("Not Weird");
            else if (n < 21) System.out.println("Weird");
            else System.out.println("Not Weird");
        } else System.out.println("Weird");
    }
}
