object Solution {

    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var N = sc.nextInt();
        
        (1 to 10).foreach((i: Int) => {
            println(N.toString + " x " + i.toString + " = " + (N * i).toString);
        })
    }
}
