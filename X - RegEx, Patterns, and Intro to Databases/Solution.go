package main

import (
	"fmt"
	"regexp"
	"sort"
)

func main() {
	var n int
	var name, mail string
	var nameSlice []string
	fmt.Scan(&n)

	r, _ := regexp.Compile(`(@gmail\.com)$`)

	for i := 0; i < n; i++ {
		fmt.Scanln(&name, &mail)
		if r.MatchString(mail) {
			nameSlice = append(nameSlice, name)
		}
	}
	sort.Slice(nameSlice, func(i, j int) bool {
		return nameSlice[i] < nameSlice[j]
	})
	for _, v := range nameSlice {
		fmt.Println(v)
	}

}
