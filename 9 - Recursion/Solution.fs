open System

let rec factorial n = 
    if n < 1 then 1
    else n * factorial (n - 1)

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    Console.WriteLine(factorial n)
    0
