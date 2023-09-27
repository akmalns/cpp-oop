#include <iostream>
#include <string>
using namespace std;

struct YouTubeChannel
{
    /* data */
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

void operator<<(ostream& COUT,YouTubeChannel& CHAN){
    COUT<<"Name: "<<CHAN.Name<<endl;
    COUT<<"Subscribers Count: "<<CHAN.SubscribersCount<<endl;
}

int main(){
    
    YouTubeChannel yt1 = YouTubeChannel("Akmal Channel",0);

    cout << yt1;


    return 0;
}