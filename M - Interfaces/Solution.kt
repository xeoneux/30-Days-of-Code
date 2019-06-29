internal interface AdvancedArithmetic {
    fun divisorSum(n: Int): Int
}

internal class Calculator : AdvancedArithmetic {
    override fun divisorSum(n: Int): Int {
        var sum = 0
        for (i in 1..n) {
            if (n % i == 0) sum += i
        }
        return sum
    }
}

fun main(args: Array<String>) {
    val scan = Scanner(System.`in`)
    val n = scan.nextInt()
    scan.close()

    val myCalculator = Calculator()
    val sum = myCalculator.divisorSum(n)
    println("I implemented: " + myCalculator.javaClass.interfaces[0].name)
    println(sum)
}
