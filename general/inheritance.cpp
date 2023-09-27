#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
private:
    string Name;
    int SubscriberCount;
    list<string> PublishedVideoTitles;  
protected:
    string OwnerName;
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

class CookingYouTubeChannel:public YouTubeChannel{
public:    
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){

    }
    void Practice(){
        cout<<OwnerName<<" is practicing cooking"<<endl;
    }
};

int main(){
    CookingYouTubeChannel ytChannel("Akmal Channel","Akmal");
    ytChannel.PublishVideo("Pen Pineapple Apple Pen");
    
    ytChannel.GetInfo();

    ytChannel.Practice();

    return 0;
}