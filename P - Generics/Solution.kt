internal class PrinterKotlin<T> {
    fun printArray(array: Array<T>) {
        for (t in array) {
            println(t)
        }
    }
}

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var n = scanner.nextInt()
    val intArray = Array(n) { 0 }
    for (i in 0 until n) {
        intArray[i] = scanner.nextInt()
    }
    n = scanner.nextInt()
    val stringArray = Array(n) { "" }
    for (i in 0 until n) {
        stringArray[i] = scanner.next()
    }
    val intPrinter = PrinterKotlin<Int>()
    val stringPrinter = PrinterKotlin<String>()
    intPrinter.printArray(intArray)
    stringPrinter.printArray(stringArray)
    if (PrinterKotlin::class.java.declaredMethods.size > 1) {
        println("The Printer class should only have 1 method named printArray.")
    }
}
