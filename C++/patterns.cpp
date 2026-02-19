#include <iostream>
int takeUserInput(){
    int t;
    std::cout<<"Enter a number: ";
    std::cin>>t;
    return t;
}
int printer(int flip){
    return flip ^ 1;
} 
int main() {
    // ****
    // ****
    // ****
    // ****
    int n = takeUserInput();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // *
    // **
    // ***
    // ****
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1
    // 12
    // 123
    // 1234
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1
    // 22
    // 333
    // 4444
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<i;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // ****
    // ***
    // **
    // *
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1234
    // 123
    // 12
    // 1
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //    *
    //   ***
    //  *****
    // *******
    for(int i=0; i<n; i++){
        for(int j=n+i; j>0; j--){
            if(j>i*2+1){
                std::cout<<" ";
            }else{
            std::cout<<"*";
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //    *
    //   **
    //  ***
    // ****
    for(int i=n; i>0; i--){
        for(int j=0; j<n; j++){
            if (j<i-1){
                std::cout<<" ";
            }else{
            std::cout<<"*";
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // *******
    //  *****
    //   ***
    //    *
    for(int i=n; i>0; i--){
        for(int j=0; j<n+i-1; j++){
            if(j<n-i){ 
                std::cout<<" ";
            }else{
                std::cout<<"*";
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //    *
    //   ***
    //  *****
    // *******
    // *******
    //  *****
    //   ***
    //    *
    for(int i=0; i<n; i++){
        for(int j=n+i; j>0; j--){
            if(j>i*2+1){
                std::cout<<" ";
            }else{
            std::cout<<"*";
            }
        }
        std::cout<<std::endl;
    }
    for(int i=n; i>0; i--){
        for(int j=0; j<n+i-1; j++){
            if(j<n-i){ 
                std::cout<<" ";
            }else{
                std::cout<<"*";
            }
        }
        std::cout<<std::endl;
    }
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    int diff = 0;
    for(int i=1; i<=2*n-1; i++){
        int end = i;
        if(i>n){
            diff=diff+2;
        }
        for(int j=0; j<i-diff; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1
    // 01
    // 101
    // 0101
    // 10101
    int flipIth = 0;
    for(int i=1; i<=n; i++){
        flipIth = printer(flipIth);
        int flip = flipIth;
        for(int j=1; j<=i; j++){
            flip = printer(flip);
            std::cout<<printer(flip);
            
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 0
    // 11
    // 000
    // 1111
    // 00000
    int flipI = 0;
    for(int i=1; i<=n; i++){
        flipI = printer(flipI);
        for(int j=1; j<=i; j++){
            std::cout<<printer(flipI);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1       1 
    // 12     21
    // 123   321 
    // 1234 4321 
    // 123454321
    int differ = 2*n-2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            int diff = 2;
            int counter = 1;
            if(i==j || j==2*n-i){
                if(j>n){
                    counter = j-differ;
                    differ=differ-2;
                }else{
                    counter=j;
                }
            }else if(j<i){
                counter=j;
            }else if(j>2*n-1-i){
                counter=2*n-j;
            }
            if(j>i && j<2*n-i){
                std::cout<<" ";
                continue;
            }
            std::cout<<counter;
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<count++<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    char asciiValue = 65;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            std::cout<<static_cast<char>(asciiValue+j);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for(int i=n; i>=1; i--){
        for(int j=0; j<i; j++){
            std::cout<<static_cast<char>(asciiValue+j);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    // A
    // BB
    // CCC
    // DDDD
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<static_cast<char>(asciiValue+i-1);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}
