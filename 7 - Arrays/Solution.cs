using System;

class Solution
{
    static void Main(String[] args)
    {
        Console.ReadLine();

        var str = Console.ReadLine();
        var arr = str.Split(' ');

        Array.Reverse(arr);

        foreach (var num in arr)
        {
            Console.Write($"{num} ");
        }
    }
}
