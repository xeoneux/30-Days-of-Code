package main

import "fmt"

func swap(x int, y int) (int, int) {
	return y, x
}

func main() {
	var n, numSwaps int
	fmt.Scan(&n)

	a := make([]int, n)

	for k := range a {
		fmt.Scan(&a[k])
	}

	for i := 0; i < n-1; i++ {
		for j := 0; j < n-i-1; j++ {
			if a[j] > a[j+1] {
				a[j], a[j+1] = swap(a[j], a[j+1])
				numSwaps++
			}
		}
		if numSwaps == 0 {
			break
		}
	}

	fmt.Printf("Array is sorted in %d swaps.\n", numSwaps)
	fmt.Printf("First Element: %d\n", a[0])
	fmt.Printf("Last Element: %d\n", a[n-1])
}
