#include <iostream>

void printNumber(int* numPtr){
    std::cout<<*numPtr<<std::endl;
}

void printChar(char* charPtr){
    std::cout<<*charPtr<<std::endl;
}

void print(void* ptr,char type){
    switch (type)
    {
    case 'i':
        std::cout<<*((int*)ptr)<<std::endl;
        break;
    case 'f':
        std::cout<<*((float*)ptr)<<std::endl;
        break;
    case 'c':
        std::cout<<*((char*)ptr)<<std::endl;
        break;
    case 'd':
        std::cout<<*((double*)ptr)<<std::endl;
        break;
    
    default:
        break;
    }
}

int main(){
    int number = 5;
    char letter = 'a';

    printNumber(&number);
    printChar(&letter);

    print(&number,'i');
    print(&letter,'c');

    return 0;
}