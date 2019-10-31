object Solution {
    def main(args: Array[String]) {
        val inputs: List[String] = io.Source.stdin.getLines.toList
        val n: Int = inputs.head.toInt
        def splitToMap(str: String): (String, String) = {
            val splits = str.split(" ")
            (splits(0) -> splits(1))
        }
        val entries = inputs.tail.slice(0, n).foldLeft[Map[String,String]](Map.empty)((acc: Map[String,String], e: String) => acc + splitToMap(e))
        def find(entry: String): String = entries.get(entry) match {
            case Some(i) => entry + "=" + i
            case None => "Not found"
        }
        val queries = inputs.tail.drop(n)
        val outputs = queries.map(find(_))
        println(outputs.mkString("\n"))
    }
}
