open System
open System.Collections.Generic

[<EntryPoint>]
let main argv = 
    let n = Console.ReadLine() |> int
    let phoneBook = Dictionary<string, int>()
    for i = 0 to n - 1 do
        let entry = Console.ReadLine().Split(' ')
        let name = entry.[0]
        let phone = entry.[1] |> int
        phoneBook.Add(name, phone)
    for i = 0 to n - 1 do
        let name = Console.ReadLine()
        if phoneBook.ContainsKey(name) then 
            let phone = phoneBook.[name]
            printfn "%s=%i" name phone
        else printfn "Not found"
    0
