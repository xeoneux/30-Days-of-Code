var arr = Array(repeating: Array( repeating: 0, count: 6), count: 6)

for i in 0 ... 5 {
    let tmp = readLine()!.components(separatedBy: " ").map{ Int($0)! }
    arr[i] = tmp.map {
        Int($0)
    }
}

var max = -9 * 7;

for i in 0 ... 5 {
    for j in 0 ... 5 {
        if j + 2 < 6 && i + 2 < 6 {
            let top = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
            let mid = arr[i + 1][j + 1]
            let bot = arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            let sum = top + mid + bot
            
            if sum > max {
                max = sum
            }
        }
    }
}

print(max)
