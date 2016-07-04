import java.util.Scanner;

abstract class Book {
    String title;
    String author;

    Book(String t, String a) {
        title = t;
        author = a;
    }

    abstract void display();
}

class MyBook extends Book {
    private int price;

    MyBook(String t, String a, int p) {
        super(t, a);
        price = p;
    }

    @Override
    void display() {
        System.out.println("Title: " + title + "\nAuthor: " + author + "\nPrice: " + price);
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String title = sc.nextLine();
        String author = sc.nextLine();
        int price = sc.nextInt();
        
        Book new_novel = new MyBook(title, author, price);
        new_novel.display();
    }
}
