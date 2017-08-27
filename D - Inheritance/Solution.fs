open System

type Person(firstName, lastName, identification) = 
    member val FirstName = firstName with get, set
    member val LastName = lastName with get, set
    member val ID = identification with get, set
    member this.printPerson() = printfn "Name: %s, %s\nID: %i" this.LastName this.FirstName this.ID

type Student(firstName, lastName, identification, testScores : int []) = 
    inherit Person(firstName, lastName, identification)
    member val TestScores = testScores with get, set
    member this.calculate() = 
        let mutable total = 0
        for testScore in this.TestScores do
            total <- total + testScore
        let avg = total / this.TestScores.Length
        if (avg >= 90 && avg <= 100) then 'O'
        elif (avg >= 80 && avg < 90) then 'E'
        elif (avg >= 70 && avg < 80) then 'A'
        elif (avg >= 55 && avg < 70) then 'P'
        elif (avg >= 40 && avg < 55) then 'D'
        else 'T'

[<EntryPoint>]
let main argv = 
    let inputs = Console.ReadLine().Split()
    let firstName = inputs.[0]
    let lastName = inputs.[1]
    let id = inputs.[2] |> int
    Console.ReadLine() |> ignore
    let scores = Console.ReadLine().Split() |> Array.map int
    let student = Student(firstName, lastName, id, scores)
    student.printPerson()
    printfn "Grade: %c\n" (student.calculate())
    0
