using System;

class Solution
{
    static void Main(String[] args)
    {
        var n = int.Parse(Console.ReadLine());

        var sum = 0;
        var max = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                sum++;

                if (sum > max)
                    max = sum;
            }
            else sum = 0;

            n = n / 2;
        }

        Console.WriteLine(max);
    }
}
