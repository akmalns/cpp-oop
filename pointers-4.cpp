#include <iostream>

int getMin(int numbers[],int size){
    int temp=numbers[0];
    
    if(size==1){
        return temp;
    }
    
    for(int i=1;i<size;i++){
        if(numbers[i]<temp){
            temp=numbers[i];
        }
    }
    
    return temp;
}

int getMax(int numbers[],int size){
    int temp=numbers[0];
    
    if(size==1){
        return temp;
    }
    
    for(int i=1;i<size;i++){
        if(numbers[i]>temp){
            temp=numbers[i];
        }
    }
    
    return temp;
}

void getMinAndMax(int numbers[],int size, int* min, int* max){
    *min=numbers[0];
    *max=numbers[0];
    
    if(size==1){
        return;
    }
    
    for(int i=1;i<size;i++){
        if(numbers[i]>*max){
            *max=numbers[i];
        }
        if(numbers[i]<*min){
            *min=numbers[i];
        }
    }
    
}

int main(){
    int numbers[5]={3,5,-5,2,9};
    int min=0, max=0;
    getMinAndMax(numbers,5,&min,&max);

    std::cout << getMin(numbers,5) << std::endl;
    std::cout << getMax(numbers,5) << std::endl;

    std::cout << "Min= " << min << ", Max= " << max << std::endl;

    return 0;
}