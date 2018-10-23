import java.util.Scanner

fun main(args: Array<String>) {
    val `in` = Scanner(System.`in`)
    val string = `in`.next()
    `in`.close()
    try {
        val integer = Integer.parseInt(string)
        println(integer)
    } catch (numberFormatException: NumberFormatException) {
        println("Bad String")
    }
}
