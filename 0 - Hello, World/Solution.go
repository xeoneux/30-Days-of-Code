package main

import (
    "fmt"
    "bufio"
    "os"
)

func main(){
    reader := bufio.NewReader(os.Stdin)
    var message string
    message, _ = reader.ReadString('\n')
    
    fmt.Printf("Hello, World.\n%s", message)
}
