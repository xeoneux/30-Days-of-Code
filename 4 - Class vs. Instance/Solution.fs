open System

type Person(initialAge) = 
    let mutable age = 0
    
    do 
        if initialAge > 0 then age <- initialAge
        else Console.WriteLine("Age is not valid, setting age to 0.")
    
    member val Age = age with get, set
    
    member this.amIOld() = 
        if this.Age < 13 then Console.WriteLine("You are young.")
        elif this.Age < 18 then Console.WriteLine("You are a teenager.")
        else Console.WriteLine("You are old.")
    
    member this.yearPasses() = this.Age <- this.Age + 1

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    for i = 0 to n do
        let age = Console.ReadLine() |> int
        let person = Person(age)
        person.amIOld()
        for j = 0 to 3 do
            person.yearPasses()
        person.amIOld()
        Console.WriteLine()
    0
