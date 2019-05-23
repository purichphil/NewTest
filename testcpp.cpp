#include<stdio.h>
#include <iostream>
#include <vector>

int main(){
    std::cout << "Hello World!!" << std::endl;
    std::cout << "Result :" << std::endl;        
    std::vector<int> test(10);
    
    for (int i=0; i<10; i++){
        test[i] = i * 2;
        std::cout << test[i] << ',';
    }

    std::cout << std::endl;
}
