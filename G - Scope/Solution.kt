class Difference(private val elements: IntArray) {
    var maximumDifference: Int = 0

    fun computeDifference() {
        var max = 0

        for (i in elements.indices) {
            for (j in elements.indices) {
                val abs = Math.abs(elements[i] - elements[j])
                if (abs > max) max = abs
            }
        }
        maximumDifference = max
    }
}

fun main(args: Array<String>) {
    val n = Integer.parseInt(readLine())
    val a = readLine()!!.split(' ')
    val numbers = IntArray(n)

    for (i in a.indices) {
        numbers[i] = Integer.parseInt(a[i])
    }

    val difference = Difference(numbers)
    difference.computeDifference()

    print(difference.maximumDifference)
}
