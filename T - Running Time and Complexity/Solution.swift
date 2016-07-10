import Foundation

func isPrime(n: Int) -> Bool {
    for i in 2 ... Int(sqrt(Double(n))) {
        if n % i == 0 {
            return false
        }
    }
    
    return true
}

let T = Int(readLine()!)!

for i in 0 ..< T {
    let n = Int(readLine()!)!

    if n >= 2 && isPrime(n) {
        print("Prime")
    } else {
        print("Not prime")
    }
}
