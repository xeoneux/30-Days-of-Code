let n = Int(readLine()!)!

if n % 2 != 0 {
    print("Weird")
} else {
    if n <= 5 {
        print("Not Weird")
    } else if n <= 20 {
        print("Weird")
    } else if(n <=100) {
        print("Not Weird") // The code says that n should be between 1 and 100
    }
}
