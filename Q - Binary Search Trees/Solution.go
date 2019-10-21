import "sort"

func main() {
  arr := []int{2,4,3,1}
  sort.Ints(arr)
  fmt.Println(arr) // => [1,2,3,4]
}
