open System

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    for i = 1 to 10 do
        let sum = n * i
        printfn "%i x %i = %i" n i sum
    0
