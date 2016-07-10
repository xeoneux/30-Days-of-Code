class Book {
    var title: String
    var author: String

    init(t: String, a: String) {
        self.title = t;
        self.author = a;
    }

    func display() {
        fatalError("Subclasses need to implement the `display()` method.")
    }
}

class MyBook: Book {
    var price: Int

    init(t: String, a: String, p: Int) {
        self.price = p
        super.init(t: t, a: a)
    }

    override func display() {
        print("Title: \(title)\nAuthor: \(author)\nPrice: \(price)");
    }
}

let title = readLine()!
let author = readLine()!
let price = Int(readLine()!)!
let new_novel = MyBook(t: title, a: author, p: price);
new_novel.display();
