import java.lang.Math.round

fun main(args: Array<String>) {
        val mealCost = readLine()!!.toDouble()
        val tipPercent = readLine()!!.toInt()
        val taxPercent = readLine()!!.toInt()

        val tip = tip_percent * meal_cost / 100
        val tax = tax_percent * meal_cost / 100

        println((tip + tax + meal_cost).roundToInt())
}
