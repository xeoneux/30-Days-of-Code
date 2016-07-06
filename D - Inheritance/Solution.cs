using System;

class Person
{
    protected string firstName;
    protected string lastName;
    protected int id;

    public Person() { }
    public Person(string firstName, string lastName, int identification)
    {
        this.firstName = firstName;
        this.lastName = lastName;
        id = identification;
    }
    public void printPerson()
    {
        Console.WriteLine("Name: " + lastName + ", " + firstName + "\nID: " + id);
    }
}

class Student : Person
{
    int[] testScores;

    public Student(string firstName, string lastName, int identification, int[] testScores) : base(firstName, lastName, identification)
    {
        this.testScores = testScores;
    }

    public char calculate()
    {
        int total = 0;

        foreach (int testScore in testScores) total += testScore;

        int avg = total / testScores.Length;

        if (avg >= 90 && avg <= 100) return 'O';
        if (avg >= 80 && avg < 90) return 'E';
        if (avg >= 70 && avg < 80) return 'A';
        if (avg >= 55 && avg < 70) return 'P';
        if (avg >= 40 && avg < 55) return 'D';
        return 'T';
    }
}


class Solution
{
    static void Main()
    {
        string[] inputs = Console.ReadLine().Split();
        string firstName = inputs[0];
        string lastName = inputs[1];
        int id = Convert.ToInt32(inputs[2]);
        int numScores = Convert.ToInt32(Console.ReadLine());
        inputs = Console.ReadLine().Split();
        int[] scores = new int[numScores];
        for (int i = 0; i < numScores; i++)
        {
            scores[i] = Convert.ToInt32(inputs[i]);
        }

        Student s = new Student(firstName, lastName, id, scores);
        s.printPerson();
        Console.WriteLine("Grade: " + s.calculate() + "\n");
    }
}
