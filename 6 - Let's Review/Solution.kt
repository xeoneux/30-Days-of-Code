import java.util.Scanner

object Solution {
    @JvmStatic fun main(args: Array<String>) {
        val input = Scanner(System.`in`)
        val N = input.nextInt()

        input.nextLine()

        (0..N-1).forEach { _ ->
            val string = input.nextLine()
            val charArray = string.toCharArray()

            charArray.indices
                    .filter { it % 2 == 0 }
                    .forEach { print(charArray[it]) }

            print(" ")

            charArray.indices
                    .filter { it % 2 != 0 }
                    .forEach { print(charArray[it]) }

            println()
        }

        input.close()
    }
}
