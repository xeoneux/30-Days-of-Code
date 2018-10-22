package main

import "fmt"

func main() {
	var n int
	for {
		fmt.Scan(&n)
		if n >= 1 && n <= 100 {
			break
		}
	}

	if n%2 == 0 {
		if n >= 2 && n <= 5 {
			fmt.Println("Not Weird")
		} else if n >= 6 && n <= 20 {
			fmt.Println("Weird")
		} else if n > 20 {
			fmt.Println("Not Weird")
		}
	} else {
		fmt.Println("Weird")
	}
}
