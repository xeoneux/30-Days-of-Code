fun main(args: Array<String>) {
    val scan = Scanner(System.`in`)
    val arrCount = scan.nextLine().trim().toInt()
    val arr = scan.nextLine().split(" ").map { it.trim().toInt() }.toTypedArray()
    var numSwaps = 0
    for (i in 0 until arr.size) {
        for (j in 0 until arr.size - 1) {
            if (arr[j] > arr[j + 1]) {
                val tmp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = tmp
                numSwaps++
            }
        }
        if (numSwaps == 0) {
            break
        }
    }
    println("Array is sorted in $numSwaps swaps.")
    println("First Element: ${arr[0]}")
    println("Last Element: ${arr[arr.size - 1]}")
}
