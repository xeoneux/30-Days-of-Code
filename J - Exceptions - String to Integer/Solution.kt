fun main(args: Array<String>) {
    val inputString = readLine()
    try {
        val integer = Integer.parseInt(inputString)
        println(integer)
    } catch (numberFormatException: NumberFormatException) {
        println("Bad String")
    }
}
