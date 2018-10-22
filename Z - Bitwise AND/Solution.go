package main

import "fmt"

func main() {
	var t, n, k, max int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&n, &k)
		for j := 1; j <= n; j++ {
			for v := 1; v < j; v++ {
				andResult := j & v
				if andResult < k && andResult > max {
					max = andResult
				}
			}
		}
		fmt.Println(max)
		max = 0
	}
}
