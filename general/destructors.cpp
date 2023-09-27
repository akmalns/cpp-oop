#include <iostream>

class Book{
private:
    std::string Title;
    std::string Author;
    int* Rates;
    int RatesCounter;

public:
    Book(std::string title, std::string author){
        Title=title;
        Author=author;

        //Array Member
        RatesCounter=2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;
    }
    ~Book(){
        delete [] Rates;
        Rates = nullptr;
        std::cout<<"Destroying "<<Title<<std::endl;
    }
};


int main(){

    Book myBook("Deep Work","Cal Newport");
    Book myBook2("Deep Work 2","Cal Newport 2");


    return 0;
}