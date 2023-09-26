#include <iostream>

int main(){
    int size;
    std::cout<<"Enter array size= ";
    std::cin>>size;

    int* myArray = new int[size];

    for(int i=0;i<size;i++){
        std::cout<<"Array["<<i<<"]= ";
        std::cin>>myArray[i];
    }

    for(int i=0;i<size;i++){
        std::cout<< myArray[i] << "   ";
    }
    std::cout<<std::endl;

    delete [] myArray;
    myArray=nullptr;

    return 0;
}