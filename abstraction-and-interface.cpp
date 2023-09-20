#include <iostream>
using namespace std;

class Smartphone{
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android:public Smartphone{
public:
    void TakeASelfie(){
        cout<<"Selfie is Taken by an Android Phone\n";
    }
    void MakeACall(){
        cout<<"Calling from Android device"<<endl;
    }
};

class Iphone:public Smartphone{
public:
    void TakeASelfie(){
        cout<<"Selfie is Taken by an Iphone\n";
    }
    void MakeACall(){
        cout<<"Calling from Iphone device"<<endl;
    }
};

int main(){

    Smartphone *myPhone = new Android;
    Smartphone *myIphone = new Iphone;

    myPhone->TakeASelfie();
    myIphone->TakeASelfie();
    cout<<endl;

    myPhone->MakeACall();
    myIphone->MakeACall();

    return 0;
}