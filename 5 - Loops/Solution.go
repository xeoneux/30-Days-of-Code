package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	for i := 1; i <= 10; i++ {
		fmt.Printf("%d x %d = %d\n", n, i, i*n)
	}
}
