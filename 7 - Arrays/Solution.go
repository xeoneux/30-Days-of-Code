package main

import "fmt"

func printReverse(l, h int, arr []int) {
	if l > h {
		return
	} else {
		printReverse(l+1, h, arr)
		fmt.Printf("%d ", arr[l])
	}
}

func main() {
	var n int

	fmt.Scan(&n)

	a := make([]int, n)
	for k := range a {
		fmt.Scan(&a[k])
	}
	printReverse(0, n-1, a)
}
