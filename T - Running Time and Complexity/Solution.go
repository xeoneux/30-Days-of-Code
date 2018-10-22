package main

import (
	"fmt"
	"math"
)

func checkPrime(num float64) string {
	var i int
	if num == 1 || (num != 2 && int(num)%2 == 0) {
		return "Not prime"
	}

	for i = 3; i <= int(math.Sqrt(num)); i += 2 {
		if int(num)%i == 0 {
			return "Not prime"
		}
	}
	return "Prime"
}

func main() {
	var t int
	fmt.Scan(&t)

	s := make([]float64, t)

	for k := range s {
		fmt.Scan(&s[k])
	}

	for _, v := range s {
		fmt.Println(checkPrime(v))
	}
}
