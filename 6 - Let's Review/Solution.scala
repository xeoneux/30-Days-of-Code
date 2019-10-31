object Solution {

    def main(args: Array[String]) {
        def isOdd(n: Int): Boolean = n % 2 != 0
            
        def split(str: String): (String, String) = {
            def splithelper(orgString: String, even: String = "", odd: String = "", currIndex: Int = 0) : (String, String) = {
                if (orgString == null || orgString.length == 0) if (isOdd(currIndex)) return (odd, even) else return (even, odd)
                splithelper(orgString.tail, odd, even + orgString.head, currIndex + 1)
            }
            splithelper(str, "", "", 0);
        }
        val lines = io.Source.stdin.getLines.toList
        val splitStrings = lines.tail.map(split _).map({ case (even: String, odd: String) => even + " " + odd})
        println(splitStrings.mkString("\n"))
    }

}
