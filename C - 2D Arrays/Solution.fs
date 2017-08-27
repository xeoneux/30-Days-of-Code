open System

[<EntryPoint>]
let main argv = 
    let arr = 
        [| [| 0; 0; 0; 0; 0; 0 |]
           [| 0; 0; 0; 0; 0; 0 |]
           [| 0; 0; 0; 0; 0; 0 |]
           [| 0; 0; 0; 0; 0; 0 |]
           [| 0; 0; 0; 0; 0; 0 |]
           [| 0; 0; 0; 0; 0; 0 |] |]
    for i = 0 to 5 do
        arr.[i] <- Console.ReadLine().Split(' ') |> Array.map int
    let mutable max = -9 * 7
    for i = 0 to 5 do
        for j = 0 to 5 do
            if j + 2 < 6 && i + 2 < 6 then 
                let sum = 
                    arr.[i].[j] + arr.[i].[j + 1] + arr.[i].[j + 2] + arr.[i + 1].[j + 1] + arr.[i + 2].[j] 
                    + arr.[i + 2].[j + 1] + arr.[i + 2].[j + 2]
                if sum > max then max <- sum
    Console.WriteLine(max)
    0
