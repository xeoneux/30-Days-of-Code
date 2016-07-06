using System;

class Solution
{
    static void Main(String[] args)
    {
        var str = Console.ReadLine();

        try
        {
            int num = int.Parse(str);
            Console.WriteLine(num);
        }
        catch (Exception)
        {
            Console.WriteLine("Bad String");
        }
    }
}
