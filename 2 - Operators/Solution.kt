import java.lang.Math.round

fun main(args: Array<String>) {
    val mealCost = readLine()!!.toDouble()
    val tipPercent = readLine()!!.toInt()
    val taxPercent = readLine()!!.toInt()

    val tip = tipPercent * mealCost / 100;
    val tax = taxPercent * mealCost / 100;

    val totalCost = round(tip + tax + mealCost);
    println("The total meal cost is ${totalCost.toInt()} dollars.")
}
