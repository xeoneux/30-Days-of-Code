using System;

class Solution
{
    static void printArray<Element>(Element[] array)
    {
        foreach (var element in array)
        {
            Console.WriteLine(element);
        }
    }

    static void Main(String[] args)
    {
        var vInt = new int[] { 1, 2, 3 };
        var vString = new string[] { "Hello", "World" };

        printArray<int>(vInt);
        printArray<string>(vString);
    }
}
