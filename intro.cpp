#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;  

};

int main(){
    YouTubeChannel ytChannel;
    ytChannel.Name = "AkmalChannel";
    ytChannel.OwnerName = "Akmal";
    ytChannel.SubscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"first","second","third"};

    cout<<"Name: "<<ytChannel.Name<<endl;
    cout<<"Owner: "<<ytChannel.OwnerName<<endl;
    cout<<"SubscriberCnt: "<<ytChannel.SubscriberCount<<endl;
    
    cout<<"Videos:"<<endl;
    for(string vidTitle:ytChannel.PublishedVideoTitles){
        cout<<vidTitle<<endl;
    }


    system("pause>0");
}