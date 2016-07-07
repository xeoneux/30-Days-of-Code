using System;

class Solution
{
    static void Main(String[] args)
    {
        var a = int.Parse(Console.ReadLine());
        var ar = Console.ReadLine().Split(' ');
        var arr = Array.ConvertAll(ar, int.Parse);

        int numSwaps = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                    numSwaps++;
                }
            }

            if (numSwaps == 0)
            {
                break;
            }
        }

        Console.WriteLine("Array is sorted in " + numSwaps + " swaps.");
        Console.WriteLine("First Element: " + arr[0]);
        Console.WriteLine("Last Element: " + arr[arr.Length - 1]);
    }
}
