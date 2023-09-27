#include <iostream>

int main(){
    int luckyNumbers[5]={2,4,5,6,23};

    std::cout<< luckyNumbers << " " << *(luckyNumbers+1) << std::endl;

    return 0;
}