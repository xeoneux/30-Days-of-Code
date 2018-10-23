import java.util.Scanner

internal class Difference(private val elements: IntArray) {
    var maximumDifference: Int = 0

    fun computeDifference() {
        var max = 0

        elements.forEach { first ->
            elements.forEach { second ->
                val abs = Math.abs(first - second)
                if (abs > max) max = abs
            }
        }

        maximumDifference = max
    }
}

object Solution {
    @JvmStatic fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        val n = sc.nextInt()
        val a = IntArray(n)
        for (i in 0..n - 1) {
            a[i] = sc.nextInt()
        }
        sc.close()

        val difference = Difference(a)

        difference.computeDifference()

        print(difference.maximumDifference)
    }
}
