import java.util.Scanner

open class Person(var firstName: String, var lastName: String, var idNumber: Int) {
    fun printPerson() {
        println("Name: $lastName, $firstName\nID: $idNumber")
    }
}

class Student(firstName: String, lastName: String, identification: Int, private val testScores: IntArray) :
        Person(firstName, lastName, identification) {

    fun calculate(): Char {
        var total = 0

        for (testScore in testScores) total += testScore

        val avg = total / testScores.size

        if (avg in 90..100) return 'O'
        if (avg in 80..89) return 'E'
        if (avg in 70..79) return 'A'
        if (avg in 55..69) return 'P'
        return if (avg in 40..54) 'D' else 'T'
    }
}

fun main(args: Array<String>) {
    val scan = Scanner(System.`in`)
    val firstName = scan.next()
    val lastName = scan.next()
    val id = scan.nextInt()
    val numScores = scan.nextInt()
    val testScores = IntArray(numScores)
    for (i in 0 until numScores) {
        testScores[i] = scan.nextInt()
    }
    scan.close()

    val s = Student(firstName, lastName, id, testScores)
    s.printPerson()
    println("Grade: " + s.calculate())
}
