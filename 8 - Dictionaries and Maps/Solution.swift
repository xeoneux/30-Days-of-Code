let n = Int(readLine()!)!

var phoneBook = [String: Int]()

for i in 1 ... n {
    let entry = readLine()!.characters.split(" ").map(String.init)
    let name = entry[0]
    let phone = Int(entry[1])!

    phoneBook[name] = phone
}

for i in 1 ... n {
    let name = readLine()!
    if (phoneBook.keys.contains(name)) {
        let phone = phoneBook[name]!
        print("\(name!)=\(phone!)")
    } else {
        print("Not found")
    }
}
