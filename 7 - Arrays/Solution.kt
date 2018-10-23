import java.util.Scanner

object Solution {
    @JvmStatic fun main(args: Array<String>) {
        val input = Scanner(System.`in`)
        val n = input.nextInt()

        val arr = (0..n-1).map {
            input.nextInt()
        }

        (0..n-1).forEach {
            val idx = n - it - 1
            print(arr[idx].toString() + " ")
        }

        input.close()
    }
}
