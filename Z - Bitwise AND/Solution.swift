let T = Int(readLine()!)!

for i in 0 ..< T {
    var input = readLine()!.characters.split(" ").map(String.init)
    var N = Int(input[0])!
    var K = Int(input[1])!

    var max = 0;

    for j in 1 ..< N - 1 {
        for k in j + 1 ..< N {
            let h = j & k
            if (h < K && max < h) {
                max = h
            }
        }
    }

    print(max);
}
