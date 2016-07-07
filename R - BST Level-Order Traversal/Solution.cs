using System;
using System.Collections.Generic;

class Node
{
    public Node left, right;
    public int data;

    public Node(int data)
    {
        this.data = data;
        left = right = null;
    }
}

class Solution
{
    static void levelOrder(Node root)
    {
        var queue = new Queue<Node>();
        queue.Enqueue(root);

        while (queue.Count != 0)
        {
            Node curr = queue.Dequeue();
            Console.Write(curr.data + " ");

            if (curr.left != null) queue.Enqueue(curr.left);
            if (curr.right != null) queue.Enqueue(curr.right);
        }
    }

    static Node insert(Node root, int data)
    {
        if (root == null)
        {
            return new Node(data);
        }
        else
        {
            Node cur;
            if (data <= root.data)
            {
                cur = insert(root.left, data);
                root.left = cur;
            }
            else
            {
                cur = insert(root.right, data);
                root.right = cur;
            }
            return root;
        }
    }

    static void Main(String[] args)
    {
        Node root = null;
        int T = int.Parse(Console.ReadLine());
        while (T-- > 0)
        {
            int data = int.Parse(Console.ReadLine());
            root = insert(root, data);
        }
        levelOrder(root);
    }
}
