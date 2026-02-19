#include <iostream>
int takeUserInput(){
    int t;
    std::cout<<"Enter a number: ";
    std::cin>>t;
    return t;
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
    return 0;
}
