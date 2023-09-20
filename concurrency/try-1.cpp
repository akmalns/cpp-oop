#include <iostream>
#include <thread>

void my_func(){
    for(int i=0;i<100;i++){
        std::cout<<"+";
    }
}

int main(){
    std::thread t(my_func);
    t.detach();

    for(int i=0;i<300;i++){
        std::cout<<"-";
    }
    
}