class Difference {
    var elements = [Int]()
    var maximumDifference: Int!

    init(a: [Int]) {
        self.elements = a
    }

    func computeDifference() {
        // Satisfies constraint specified in project
        guard elements.count >= 1, elements.count <= 100 else { return }
        // Sort the array in ascending order
        elements.sort{$0 < $1}
        // Compute the difference between greatest and least in the array.
        maximumDifference = elements.last! - elements.first!
    }
}

let N = Int(readLine()!)!
let a = readLine()!.characters.split(" ").map(String.init).map {
    Int($0)!
}

let d = Difference(a: a)

d.computeDifference()

print(d.maximumDifference)
