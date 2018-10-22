package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var i uint64 = 4
	var d float64 = 4.0
	var s string = "HackerRank "

	scanner := bufio.NewScanner(os.Stdin)

	var i2 uint64
	var d2 float64
	var s2 string

	fmt.Scan(&i2)
	fmt.Scan(&d2)
	scanner.Scan()
	s2 = scanner.Text()

	fmt.Println(i + i2)
	fmt.Printf("%.1f\n", d+d2)
	fmt.Printf("%s%s", s, s2)
}
