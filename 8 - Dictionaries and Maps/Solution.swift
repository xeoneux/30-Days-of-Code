// Enter your code here. Read input from STDIN. Print output to STDOUT
import Foundation
let n = Int(readLine()!)!
var phonebook = [String:String]()

for _ in 0...n-1 {
    let contact = readLine()!
    let person = contact.components(separatedBy: " ")
    phonebook[person[0]] = person[1]
    
}


var queryName = readLine()
while queryName != nil {
    if phonebook.keys.contains(queryName!){
        print("\(queryName!)=\(phonebook[queryName!]!)")
    }else{
        print("Not found")
    }
    queryName = readLine()
}
