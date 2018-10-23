import java.util.Scanner

fun main(args: Array<String>) {
    val `in` = Scanner(System.`in`)
    val arr = Array(6) { IntArray(6) }
    for (i in 0..2) {
        for (j in 0..2) {
            arr[i][j] = `in`.nextInt()
        }
    }

    var max = -9 * 7
    for (i in 0..2) {
        for (j in 0..2) {
            if (j + 2 < 6 && i + 2 < 6) {
                val sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]
                if (sum > max) max = sum
            }
        }
    }
    println(max)
}
