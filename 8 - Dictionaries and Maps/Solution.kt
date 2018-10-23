import java.util.HashMap
import java.util.Scanner

internal object Solution {
    @JvmStatic fun main(args: Array<String>) {
        val input = Scanner(System.`in`)

        val n = input.nextInt()
        val phoneBook = HashMap<String, Int>()

        (0..n-1).forEach {
            val name = input.next()
            val phone = input.nextInt()
            phoneBook.put(name, phone)
        }

        while (input.hasNext()) {
            val name = input.next()
            if (phoneBook.containsKey(name)) {
                val phone = phoneBook[name]
                println(name + "=" + phone)
            } else
                println("Not found")
        }

        input.close()
    }
}
