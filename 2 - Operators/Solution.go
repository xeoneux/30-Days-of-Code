package main

import (
	"fmt"
	"math"
)

func round(num float64) float64 {
	if num < 0 {
		return math.Ceil(num - 0.5)
	}
	return math.Floor(num + 0.5)
}

func main() {
	var mealCost float64
	var tipPercent int
	var taxPercent int

	fmt.Scan(&mealCost)
	fmt.Scan(&tipPercent)
	fmt.Scan(&taxPercent)

	tip := mealCost * (float64(tipPercent) / 100)
	tax := mealCost * (float64(taxPercent) / 100)
	totalCost := mealCost + tip + tax
	var t = int(round(totalCost))
	fmt.Printf("The total meal cost is %d dollars.", t)

}
