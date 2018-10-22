package main

import "fmt"

func fineCalculator(actualDay, actualMonth, actualYear, expectedDay, expectedMonth, expectedYear int) int {
	if actualYear < expectedYear {
		return 0
	}
	if actualYear > expectedYear {
		return 10000
	}
	if actualMonth < expectedMonth {
		return 0
	}

	if actualMonth > expectedMonth {
		return (actualMonth - expectedMonth) * 500
	}

	if actualDay < expectedDay {
		return 0
	}

	if actualDay > expectedDay {
		return (actualDay - expectedDay) * 15
	}
	return 0
}

func main() {
	var actualDay, actualMonth, actualYear int
	var expectedDay, expectedMonth, expectedYear int
	fmt.Scan(&actualDay)
	fmt.Scan(&actualMonth)
	fmt.Scan(&actualYear)

	fmt.Scan(&expectedDay)
	fmt.Scan(&expectedMonth)
	fmt.Scan(&expectedYear)

	result := fineCalculator(actualDay, actualMonth, actualYear, expectedDay, expectedMonth, expectedYear)
	fmt.Println(result)
}
