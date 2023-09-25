#include <iostream>

int main(){
    int n = 5;
    int* addr = &n;
    std::cout << n << std::endl;
    std::cout << addr << std::endl;

    return 0;
}