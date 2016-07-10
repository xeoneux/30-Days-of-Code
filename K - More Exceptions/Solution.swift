import Foundation

// Defining enum for throwing error
// throw RangeError.NotInRange... is used to throw the error

enum RangeError: ErrorType {
    case NotInRange(String)
}

// Start of class Calculator

class Calculator {
    func power(n: Int, p: Int) throws -> Int {
        if n < 0 || p < 0 {
            throw RangeError.NotInRange("n and p should be non-negative")
        }
        return Int(pow(Double(n), Double(p)))
    }
}

// End of class Calculator

let myCalculator = Calculator()
var t = Int(readLine()!)!

while (t > 0) {
    t = t - 1

    let np = readLine()!.characters.split(" ").map(String.init)

    do {
        let ans = try myCalculator.power(Int(np[0])!, p: Int(np[1])!)
        print(ans)
    } catch RangeError.NotInRange(let errorMsg) {
        print(errorMsg)
    }
}
