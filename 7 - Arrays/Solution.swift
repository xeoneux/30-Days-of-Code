Int(readLine()!)!

let arr = readLine()!.characters.split(" ").map(String.init)

for str in arr.reverse() {
    print(str, terminator: " ")
}
