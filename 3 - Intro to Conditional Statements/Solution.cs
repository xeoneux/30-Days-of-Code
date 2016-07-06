using System;

class Solution
{
    static void Main(String[] args)
    {
        var N = int.Parse(Console.ReadLine());

        if (N % 2 != 0) Console.WriteLine("Weird");
        else
        {
            if (N <= 5) Console.WriteLine("Not Weird");
            else if (N <= 20) Console.WriteLine("Weird");
            else Console.WriteLine("Not Weird");
        }
    }
}
