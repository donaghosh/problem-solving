package main
import "fmt"
import "sync"

func main() {
    nums := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
    sum := 0
    worker := 2
    chunkSize := (len(nums) + worker - 1) / worker 
    endIndex := 0
    startIndex := 0
    
    ch := make(chan int,worker)
    var wg sync.WaitGroup
    
    for i:=0; i<worker; i++{
    endIndex = startIndex + chunkSize
		if endIndex > len(nums) {
			endIndex = len(nums)
		}
    slice := nums[startIndex:endIndex]
    startIndex += chunkSize
    fmt.Println(slice);
    go func(){
        wg.Add(1)
        sum =0
        for i,_ := range slice{
            sum += slice[i];
        }
        ch <- sum
        wg.Done()
      }()
    }

    wg.Wait()
   
    var totalSum int = 0  
    for i:=0; i<worker; i++{
        totalSum += <-ch
    }
    
    fmt.Println(totalSum);
}
