package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	in = bufio.NewReader(os.Stdin)
)

func main() {
	line, _ := in.ReadString('\n')
	fmt.Printf("Hello, World.\n%s", line)
}
