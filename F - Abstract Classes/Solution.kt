import java.util.Scanner

abstract class Book(var title: String, var author: String) {

    internal abstract fun display()
}

class MyBook(t: String, a: String, private val price: Int) : Book(t, a) {

    override fun display() {
        println("Title: $title\nAuthor: $author\nPrice: $price")
    }
}

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    val title = sc.nextLine()
    val author = sc.nextLine()
    val price = sc.nextInt()

    val newNovel = MyBook(title, author, price)
    newNovel.display()
}
