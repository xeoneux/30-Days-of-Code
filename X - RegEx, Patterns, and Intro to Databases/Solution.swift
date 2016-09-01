import Foundation

var list = [String]()

let N = Int(readLine()!)!

for i in 0 ..< N {
    let input = readLine()!.characters.split(" ").map(String.init)

    let name = input[0]
    let email = input[1]

    if email.rangeOfString(".+@gmail\\.com$", options: .RegularExpressionSearch) != nil {
        list.append(name)
    }
}

list.sortInPlace()

list.forEach({ name in
    print(name)
})
