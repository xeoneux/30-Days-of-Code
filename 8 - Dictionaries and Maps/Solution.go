package main

import "fmt"

func main() {
	var n int
	m := make(map[string]int)

	fmt.Scan(&n)

	var name string
	var number int
	for i := 0; i < n; i++ {
		fmt.Scan(&name)
		fmt.Scan(&number)
		m[name] = number
	}

	var query string
	for {
		_, err := fmt.Scanf("%s", &query)
		if err != nil {
			break
		}
		if value, ok := m[query]; ok {
			fmt.Printf("%s=%d\n", query, value)
		} else {
			fmt.Println("Not found")
		}
	}

}
