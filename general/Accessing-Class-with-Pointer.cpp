#include <iostream>

class Lemming{

public:
    Lemming();
    void turtle();
};

Lemming::Lemming(){
    std::cout<<"This is from the Constructor"<<std::endl;
}

void Lemming::turtle(){
    std::cout<<"This is from turtle function"<<std::endl;
}

int main(){
    Lemming lemmingObjc;
    Lemming* lemmingPointer = new Lemming;

    lemmingObjc.turtle();
    lemmingPointer->turtle();


    return 0;
}