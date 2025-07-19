// Write a Go function that takes a string as input and returns a map showing how many times each character appears in the string

package main
import "fmt"

func main() {
    input := "hello world"
    resultMap := make(map[string]int);
    for _, val := range input{
        key := string(val)
        resultMap[key]++
    }
  fmt.Println(resultMap)
}
