open System

type Difference(elements : int []) = 
    member val maximumDifference = 0 with get, set
    member val Elements = elements
    member this.computeDifference() = 
        let mutable max = 0
        for i = 0 to this.Elements.Length - 1 do
            for j = 0 to this.Elements.Length - 1 do
                let abs = Math.Abs(this.Elements.[i] - this.Elements.[j])
                if abs > max then max <- abs
        this.maximumDifference <- max

[<EntryPoint>]
let main argv = 
    Console.ReadLine() |> ignore
    let a = Console.ReadLine().Split(' ') |> Array.map int
    let d = Difference(a)
    d.computeDifference()
    Console.Write(d.maximumDifference)
    0
