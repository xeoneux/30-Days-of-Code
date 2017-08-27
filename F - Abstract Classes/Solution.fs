open System

[<AbstractClass>]
type Book(title, author) = 
    member val Title = title
    member val Author = author
    abstract display : unit -> unit

type MyBook(title, author, price) = 
    inherit Book(title, author)
    member val Price = price
    override this.display() = printfn "Title: %s\nAuthor: %s\nPrice: %i" this.Title this.Author this.Price

[<EntryPoint>]
let main argv = 
    let title = Console.ReadLine()
    let author = Console.ReadLine()
    let price = Console.ReadLine() |> int
    let novel = MyBook(title, author, price)
    novel.display()
    0
