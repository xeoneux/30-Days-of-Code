fun main(args: Array<String>) {
    val n = Integer.parseInt(readLine())
    val arrStr = readLine()!!.split(' ')

    for (i in arrStr.size-1 downTo 0) {
        print("${arrStr[i]} ")
    }
}
