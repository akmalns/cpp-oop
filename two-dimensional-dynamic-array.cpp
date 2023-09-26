#include <iostream>

int main(){
    int rows,cols;
    std::cout<<"Rows, Cols= ";
    std::cin>>rows>>cols;

    int **table = new int*[rows];
    for(int i=0;i<rows;i++){
        *(table+i)=new int[cols];
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<"Array rows "<<i<<" cols "<<j<<"=";
            std::cin>>table[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<table[i][j]<<"   ";
        }
        std::cout<<std::endl;
    }

    for(int i=0;i<rows;i++){
        delete [] *(table+i);
    }
    delete [] table;

    table = nullptr;

    return 0;
}