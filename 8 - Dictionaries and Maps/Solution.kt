import java.util.*

fun main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    val value = Scanner(System.`in`)

    val n = value.nextInt()
    val phoneBook = hashMapOf<String, Int>()

    for (i in 0 until n) {
        val name = value.next()
        val phone = value.nextInt()
        phoneBook[name] = phone
    }

    while (value.hasNext()) {
        val name = value.next()
        if (name in phoneBook) {
            val phone = phoneBook[name]
            println("$name=$phone")
        } else
            println("Not found")
    }

    value.close()
}
