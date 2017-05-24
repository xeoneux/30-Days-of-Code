open System

[<EntryPoint>]
let main argv = 
    let mealCost = Console.ReadLine() |> double
    let tipPercent = Console.ReadLine() |> int
    let taxPercent = Console.ReadLine() |> int
    let tip = float tipPercent * mealCost / 100.0
    let tax = float taxPercent * mealCost / 100.0
    let totalCost = Math.Round(tip + tax + mealCost) |> int
    printfn "The total meal cost is %i dollars." totalCost
    0
