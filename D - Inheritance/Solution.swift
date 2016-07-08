// Class Person

class Person {
    var firstName: String
    var lastName: String
    var id: Int

    // Initializer
    init(firstName: String, lastName: String, identification: Int) {
        self.firstName = firstName
        self.lastName = lastName
        self.id = identification
    }

    // Print person data
    func printPerson() {
        print("Name: \(self.lastName), \(self.firstName)")
        print("ID: \(self.id)")
    }
}

// End of class Person

// Class Student

class Student: Person {
    var testScores: [Int]

    // Write the Student class initializer
    init(firstName: String, lastName: String, identification: Int, scores: [Int]) {
        self.testScores = scores
        super.init(firstName: firstName, lastName: lastName, identification: identification)
    }

    // Write the calculate method
    func calculate() -> Character {
        var total = 0;

        for testScore in testScores {
            total += testScore;
        }

        let avg = total / testScores.count;

        if avg >= 90 && avg <= 100 {
            return "O"
        }
        if avg >= 80 && avg < 90 {
            return "E"
        }
        if avg >= 70 && avg < 80 {
            return "A"
        }
        if avg >= 55 && avg < 70 {
            return "P"
        }
        if avg >= 40 && avg < 55 {
            return "D"
        }
        return "T"
    }

}

// End of class Student

let nameAndID = readLine()!.characters.split(" ").map {
    String($0)
}
let scoreCount = readLine()
let scores = readLine()!.characters.split(" ").map {
    Int(String($0))!
}

let s = Student(firstName: nameAndID[0], lastName: nameAndID[1], identification: Int(nameAndID[2])!, scores: scores)

s.printPerson()

print("Grade: \(s.calculate())")
