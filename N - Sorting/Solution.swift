let n = Int(readLine()!)!

var arr = readLine()!.characters.split(" ").map(String.init).map {
    Int($0)!
}

var numSwaps = 0

for i in 0 ..< n {
    for j in 0 ..< n - 1 {
        if arr[j] > arr[j + 1] {
            let tmp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = tmp
            numSwaps += 1
        }
    }

    if numSwaps == 0 {
        break
    }
}

print("Array is sorted in \(numSwaps) swaps.")
print("First Element: \(arr[0])")
print("Last Element: \(arr[arr.count - 1])")
