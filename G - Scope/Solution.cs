using System;
using System.Linq;

class Difference
{
    int[] elements;
    public int maximumDifference;

    public Difference(int[] elements)
    {
        this.elements = elements;
    }

    public void computeDifference()
    {
        int max = 0;

        for (int i = 0; i < elements.Length; i++)
        {
            for (int j = 0; j < elements.Length; j++)
            {
                int abs = Math.Abs(elements[i] - elements[j]);
                if (abs > max) max = abs;
            }
        }

        maximumDifference = max;
    }
}

class Solution
{
    static void Main(string[] args)
    {
        int.Parse(Console.ReadLine());

        int[] a = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToArray();

        Difference d = new Difference(a);

        d.computeDifference();

        Console.Write(d.maximumDifference);
    }
}
