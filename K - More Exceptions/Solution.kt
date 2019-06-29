class Cal {
    fun power(n: Int, p: Int): Int {
        if (n < 0 || p < 0) throw Exception("n and p should be non-negative")
        return Math.pow(n.toDouble(), p.toDouble()).toInt()
    }
}

fun main(arg: Array<String>) {
    val scan = Scanner(System.`in`)
    var t = scan.nextInt()
    while (t-- > 0) {
        val n = scan.nextInt()
        val p = scan.nextInt()
        val myCalculator = Cal()
        try {
            val ans = myCalculator.power(n, p)
            println(ans)
        } catch (e: Exception) {
            println(e.message)
        }
    }
}
