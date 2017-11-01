fun main(args: Array<String>) {
    val N = readLine()!!.toInt()

    when {
        N % 2 != 0 -> println("Weird")
        N <= 5 -> println("Not Weird")
        N <= 20 -> println("Weird")
        else -> println("Not Weird")
    }
}
