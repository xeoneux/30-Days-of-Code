open System

[<EntryPoint>]
let main argv = 
    let mutable n = Console.ReadLine() |> int
    let mutable sum = 0
    let mutable max = 0
    while n > 0 do
        if n % 2 = 1 then 
            sum <- sum + 1
            if sum > max then max <- sum
        else sum <- 0
        n <- n / 2
    Console.WriteLine(max)
    0
