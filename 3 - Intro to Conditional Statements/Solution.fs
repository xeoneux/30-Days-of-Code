open System

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    
    let str = 
        if n % 2 <> 0 then "Weird"
        else if n <= 5 then "Not Weird"
        elif n <= 20 then "Weird"
        else "Not Weird"
    printf "%s" str
    0
