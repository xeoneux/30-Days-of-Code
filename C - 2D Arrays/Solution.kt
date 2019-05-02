import java.io.*
import java.math.*
import java.security.*
import java.text.*
import java.util.*
import java.util.concurrent.*
import java.util.function.*
import java.util.regex.*
import java.util.stream.*
import kotlin.collections.*
import kotlin.comparisons.*
import kotlin.io.*
import kotlin.jvm.*
import kotlin.jvm.functions.*
import kotlin.jvm.internal.*
import kotlin.ranges.*
import kotlin.sequences.*
import kotlin.text.*



fun main(args: Array<String>) {
        val `in` = Scanner(System.`in`)
        val arr = Array(6) { IntArray(6) }
        for (i in 0..5) {
            for (j in 0..5) {
                arr[i][j] = `in`.nextInt()
            }
        }

        var max = -9 * 7
        for (i in 0..5) {
            for (j in 0..5) {
                if (j + 2 < 6 && i + 2 < 6) {
                    val sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]
                    if (sum > max) max = sum
                }
            }
        }

        println(max)
    }
