package main

import (
	"fmt"
)

func main() {
	var n, reminder, count, max int

	fmt.Scan(&n)

	for n > 0 {
		reminder = n % 2
		if reminder == 1 {
			count++
		} else {
			count = 0
		}
		if count > max {
			max = count
		}
		n /= 2
	}
	fmt.Println(max)

}
