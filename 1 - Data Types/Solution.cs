using System;

class Solution
{
    static void Main(String[] args)
    {
        int i = 4;
        double d = 4.0;
        string s = "HackerRank ";

        // Declare second integer, double, and String variables.
        int i2;
        double d2;
        string s2;

        // Read and save an integer, double, and String to your variables.
        i2 = int.Parse(Console.ReadLine());
        d2 = double.Parse(Console.ReadLine());
        s2 = Console.ReadLine();

        // Print the sum of both integer variables on a new line.
        Console.WriteLine(String.Format("{0:0}", i + i2));

        // Print the sum of the double variables on a new line.
        Console.WriteLine(String.Format("{0:0.0}", d + d2));

        // Concatenate and print the String variables on a new line
        // The 's' variable above should be printed first.
        Console.WriteLine(s + s2);
    }
}
