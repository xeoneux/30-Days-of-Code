object Solution { 
    def main(args: Array[String]) {
        // Read values of another integer, double, and string variables
        val i1 = scala.io.StdIn.readInt
        val d1 = scala.io.StdIn.readDouble
        val s1 = scala.io.StdIn.readLine

        // Print the sum of both the integer variables
        println(i + i1)
        // Print the sum of both the double variables
        println(d + d1)
        // Concatenate and print the string variables
        // The 's' variable above should be printed first.
        println(s"$s$s1")
    }
}
