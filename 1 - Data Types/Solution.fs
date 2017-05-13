open System

[<EntryPoint>]
let main argv = 
    let i = 4
    let d = 4.0
    let s = "HackerRank "
    let i2 = Console.ReadLine() |> int
    let d2 = Console.ReadLine() |> float
    let s2 = Console.ReadLine() |> string
    printfn "%i" (i + i2)
    printfn "%f" (d + d2)
    printfn "%s" (s + s2)
    0
