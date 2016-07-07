import Foundation

let N = Int(readLine()!)!

for i in 1 ... N {
    let str = readLine()!
    let arr = Array(str.characters)

    for (idx, char) in arr.enumerate() {
        if idx % 2 == 0 {
            print(char, terminator: "")
        }
    }

    print(" ", terminator: "")

    for (idx, char) in arr.enumerate() {
        if idx % 2 != 0 {
            print(char, terminator: "")
        }
    }

    print("")
}
