#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;  

public:
    YouTubeChannel(string name, string ownerName){
        Name=name;
        OwnerName=ownerName;
        SubscriberCount=0;
    }
    void GetInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Owner: "<<OwnerName<<endl;
        cout<<"SubscriberCnt: "<<SubscriberCount<<endl;
        cout<<"Videos:"<<endl;
        for(string vidTitle:PublishedVideoTitles){
            cout<<vidTitle<<endl;
        }
    }
    void Subscribe(){
        SubscriberCount++;
    }
    void Unsubscribe(){
        if(SubscriberCount>0){
            SubscriberCount--; 
        }
    }
    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }

};

int main(){
    YouTubeChannel ytChannel("Akmal Channel","Akmal");
    // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    // ytChannel.PublishedVideoTitles.push_back("HTML and CSS for beginners");
    // ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML and CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");

    ytChannel.GetInfo();

    return 0;
}