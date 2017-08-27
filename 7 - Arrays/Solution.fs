open System

[<EntryPoint>]
let main argv = 
    Console.ReadLine() |> ignore
    let str = Console.ReadLine()
    str.Split(' ')
    |> Array.rev
    |> Array.iter (fun s -> printf "%s " s)
    0
