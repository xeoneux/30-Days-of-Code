// Start of struct Printer

struct Printer<Type> {
    func printArray<Element>(array: [Element]) {
        for element in array {
            print(element)
        }
    }
}

// End of struct Printer

let vInt = [1, 2, 3]
let vString = ["Hello", "World"]

Printer<Int>().printArray(vInt)
Printer<String>().printArray(vString)
