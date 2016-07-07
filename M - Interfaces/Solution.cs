using System;

public interface AdvancedArithmetic
{
    int divisorSum(int n);
}

class Calculator : AdvancedArithmetic
{
    public int divisorSum(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0) sum += i;
        }

        return sum;
    }
}

class Solution
{
    static void Main(String[] args)
    {
        int n = int.Parse(Console.ReadLine());
        AdvancedArithmetic myCalculator = new Calculator();
        int sum = myCalculator.divisorSum(n);
        Console.WriteLine("I implemented: AdvancedArithmetic\n" + sum);
    }
}
