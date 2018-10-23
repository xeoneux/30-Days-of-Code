fun factorial(n: Int): Int {
    return if (n == 1) 1 else factorial(n-1).times(n)
}

fun main(args: Array<String>) {
    val n = Integer.parseInt(readLine())
    println(factorial(n))
}
