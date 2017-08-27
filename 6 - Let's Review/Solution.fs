open System

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    for i = 0 to n - 1 do
        let str = Console.ReadLine()
        for j = 0 to str.Length - 1 do
            if j % 2 = 0 then Console.Write(str.[j])
        Console.Write(" ")
        for j = 0 to str.Length - 1 do
            if j % 2 <> 0 then Console.Write(str.[j])
        Console.Write(Environment.NewLine)
    0
