#include <iostream>
#include <thread>

class Thread_Guard{
    std::thread& t;
public:
    explicit Thread_Guard(std::thread& t_):
        t(t_)
    {}
    ~Thread_Guard(){
        if(t.joinable()){
            t.join();
        }
    }
    Thread_Guard(Thread_Guard const&)=delete;
    Thread_Guard& operator=(Thread_Guard const&)=delete;
};

struct func{
    int& i;
    func(int& i_):i(i_){}
    void operator() (){
        for(unsigned j=0;j<1000000;++j){
            std::cout<<"Akmal"<<std::endl;
            break;
        }
    }
};

struct func;
void f(){
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread t(my_func);
    Thread_Guard g(t);

}

int main(){
    f();
}