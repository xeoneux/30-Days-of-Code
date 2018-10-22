package main

import "fmt"

func main() {
	var a [6][6]int
	var max int
	for i := range a {
		for j := range a[i] {
			fmt.Scan(&a[i][j])
		}
	}

	for i := 0; i < 4; i++ {
		for j := 0; j < 4; j++ {
			sumHourGlass := a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]
			if (i == 0 && j == 0) || sumHourGlass > max {
				max = sumHourGlass
			}
		}
	}
	fmt.Println(max)
}
