using System;

class Solution
{
    static void Main(String[] args)
    {
        var N = int.Parse(Console.ReadLine());

        for (int i = 1; i < 11; i++)
        {
            Console.WriteLine($"{N} x {i} = {N * i}");
        }
    }
}
