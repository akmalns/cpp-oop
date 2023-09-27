#include <iostream>
#include <memory>

class MyClass{

public:
    MyClass(){
        std::cout<<"Constructor Invoked"<<std::endl;
    }
    ~MyClass(){
        std::cout<<"Destructor Invoked"<<std::endl;
    }

};

int main(){
    // std::unique_ptr<int>unPtr1=std::make_unique<int>(25);
    // std::unique_ptr<int>unPtr2=std::move(unPtr1);

    // std::cout<<*unPtr2<<std::endl;
    // std::cout<<*unPtr1<<std::endl;

    std::unique_ptr<MyClass>unPtr1=std::make_unique<MyClass>();

    std::shared_ptr<MyClass>shPtr1=std::make_shared<MyClass>();
    std::shared_ptr<MyClass>shPtr2=shPtr1;

    std::cout<<"Shared Count: "<<shPtr1.use_count()<<std::endl;

    return 0;
}