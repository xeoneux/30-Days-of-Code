import java.io.*
import java.util.*

fun main(args: Array<String>) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
        val n = Scanner(System.`in`)
            val N = n.nextInt()

            n.nextLine()

            for (i in 0 until N) {
                val string = n.nextLine()
                val charArray = string.toCharArray()

                for (j in charArray.indices) {
                    if (j % 2 == 0) {
                        print(charArray[j])
                    }
                }

                print(" ")

                for (j in charArray.indices) {
                    if (j % 2 != 0) {
                        print(charArray[j])
                    }
                }

                println()
            }

            n.close()
}

