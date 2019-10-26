import java.util.*

class Solution {

    fun main(args: Array<String>) {

        val scanner = Scanner(System.`in`)
        val num = scanner.nextInt()

        for (i in 0 until num) {
            val N = scanner.nextInt()
            val K = scanner.nextInt()

            var max = 0

            for (j in 1 until N) {
                for (k in j + 1..N) {
                    val h = j and k
                    if (h in (max + 1) until K) max = h
                }
            }

            println(max)
        }
    }
}