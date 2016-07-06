using System;

abstract class Book
{
    protected string title;
    protected string author;

    public Book(string t, string a)
    {
        title = t;
        author = a;
    }

    public abstract void display();
}

class MyBook : Book
{
    int price;

    public MyBook(string t, string a, int p) : base(t, a)
    {
        price = p;
    }

    public override void display()
    {
        Console.WriteLine($"Title: {title}\nAuthor: {author}\nPrice: {price}");
    }
}

class Solution
{
    static void Main(String[] args)
    {
        string title = Console.ReadLine();
        string author = Console.ReadLine();
        int price = int.Parse(Console.ReadLine());
        Book new_novel = new MyBook(title, author, price);
        new_novel.display();
    }
}
