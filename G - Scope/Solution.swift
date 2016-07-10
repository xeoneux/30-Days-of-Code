class Difference {
    var elements = [Int]()
    var maximumDifference: Int!

    init(a: [Int]) {
        self.elements = a
    }

    func computeDifference() {
        var maximum = 0

        for i in 0 ..< elements.count {
            for j in 0 ..< elements.count {
                let absolute = abs(elements[i] - elements[j])
                if absolute > maximum {
                    maximum = absolute
                }
            }
        }

        maximumDifference = maximum
    }
}

let N = Int(readLine()!)!
let a = readLine()!.characters.split(" ").map(String.init).map {
    Int($0)!
}

let d = Difference(a: a)

d.computeDifference()

print(d.maximumDifference)
