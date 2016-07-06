using System;

class Node
{
    public int data;
    public Node next;
    public Node(int d)
    {
        data = d;
        next = null;
    }

}

class Solution
{
    public static Node insert(Node head, int data)
    {
        if (head == null) head = new Node(data);
        else {
            Node curr = head;
            while (curr.next != null) curr = curr.next;
            curr.next = new Node(data);
        }
        return head;
    }

    public static void display(Node head)
    {
        Node start = head;
        while (start != null)
        {
            Console.Write(start.data + " ");
            start = start.next;
        }
    }
    static void Main(String[] args)
    {

        Node head = null;
        int T = int.Parse(Console.ReadLine());
        while (T-- > 0)
        {
            int data = int.Parse(Console.ReadLine());
            head = insert(head, data);
        }
        display(head);
    }
}
