// Write a program that uses Goroutines to process multiple tasks concurrently
// A, B and C
// A -> Add two numbers
// B- Sub same two numbers
// C -> Multiply results of A and B
// A and B should run concurrently

package main
import "fmt"

func functionA(a int, b int)int{
    return a+b
}

func functionB(a int, b int)int{
    return a-b
}

func functionC( a chan int,  b chan int)int{
    var varA int = <- a
    var varB int = <- b
    return varA*varB
}

func main() {
    a := 10
    b := 8
    chA := make(chan int, 1)
    chB := make(chan int, 1)
    go func(){
        chA <- functionA(a,b)
    }()
      go func(){
        chB <- functionB(a,b)
    }()
    resultC := functionC(chA, chB)
    fmt.Println(resultC)
}
