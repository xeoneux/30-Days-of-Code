import Foundation

class Solution {
    var stack: [Character] = []
    var queue: [Character] = []

    func pushCharacter(c: Character) {
        stack.append(c)
    }

    func popCharacter() -> Character {
        return stack.popLast()!
    }

    func enqueueCharacter(c: Character) {
        queue.append(c)
    }

    func dequeueCharacter() -> Character {
        return queue.removeFirst()
    }
}

// read the string s.
let s = readLine()!

// create the Solution class object p.
let obj = Solution()

// push/enqueue all the characters of string s to stack.
for c in s.characters {
    obj.pushCharacter(c)
    obj.enqueueCharacter(c)
}

var isPalindrome = true

// pop the top character from stack.
// dequeue the first character from queue.
// compare both the characters.

let chars = s.characters.count / 2

for i in 0 ..< chars {
    if obj.popCharacter() != obj.dequeueCharacter() {
        isPalindrome = false

        break
    }
}

// finally print whether string s is palindrome or not.
if isPalindrome {
    print("The word, \(s), is a palindrome.")
} else {
    print("The word, \(s), is not a palindrome.")
}
