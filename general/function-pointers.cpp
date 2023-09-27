#include <iostream>

int getNumber(){
    return 5;
}

int add(int a, int b){
    return a+b;
}

int main(){
    int (*funcPtr)()=getNumber;
    int (*funcPtr2)(int,int)=add;


    std::cout << funcPtr() << std::endl;
    std::cout << add(3,4) << std::endl;
    std::cout << funcPtr2(4,3) << std::endl;

    return 0;
}