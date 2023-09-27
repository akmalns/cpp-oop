#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;  

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

};

int main(){
    YouTubeChannel ytChannel("Akmal Channel","Akmal");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML and CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    YouTubeChannel ytChannel2("Budi Channel","Budi");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();



    return 0;
}