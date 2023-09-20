#include <iostream>
using namespace std;

class Instrument{
public:
    virtual void MakeSound() = 0;
};

class Accordion:public Instrument{
public:
    void MakeSound(){
        cout<<"Net Not"<<endl;
    }
};

class Piano:public Instrument{
public:
    void MakeSound(){
        cout<<"Ding Dong"<<endl;
    }
};

int main(){

    Instrument *i1 = new Accordion();
    i1->MakeSound();

    Instrument *i2 = new Piano();
    i2->MakeSound();

    Instrument *instruments[2]={i1,i2};

    for(Instrument* ins:instruments){
        ins->MakeSound();
    }

    return 0;
}