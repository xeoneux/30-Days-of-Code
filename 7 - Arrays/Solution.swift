Int(readLine()!)!

let arr = readLine()!.characters.split(" ").map(String.init)

for str in arr.reversed() {
    print(str, terminator: " ")
}
