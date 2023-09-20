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
    int ContentQuality;
public:
    YouTubeChannel(string name, string ownerName){
        Name=name;
        OwnerName=ownerName;
        SubscriberCount=0;
        ContentQuality=0;
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
    void CheckAnalytics(){
        if(ContentQuality<5){
            cout<<Name<<" has bad quality content."<<endl;
        }else{
            cout<<Name<<" has good quality content."<<endl;
        }
    }

};

class CookingYouTubeChannel:public YouTubeChannel{
public:    
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){

    }
    void Practice(){
        cout<<OwnerName<<" is practicing cooking"<<endl;
        ContentQuality++;
    }
};

class SingersYouTubeChannel:public YouTubeChannel{
public:
    SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){

    }
    void Practice(){
        cout<<OwnerName<<" is taking singing classes"<<endl;
        ContentQuality++;
    }

};

int main(){
    CookingYouTubeChannel ytChannel("Akmal Channel","Akmal");
    SingersYouTubeChannel singersYtChannel("John Channel","John");

    ytChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YouTubeChannel *yt1 = &ytChannel;
    YouTubeChannel *yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
    
    return 0;
}