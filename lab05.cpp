/* Program using structure which records player data and finds out avg. 
Then display names of players with avg>50 */
#include<iostream>
using namespace std;

struct player{
    char name[10];
    int runs, matchesPlayed, notoutMatches;
    float avg;
};

void input(player *p, int n){
    for (int i = 1; i <=n; i++){
        cout<<"Player No."<<i<<endl;
        cout<<"Enter Player Name, Runs, No. of Matches Played and No. of Matches NotOut: "<<endl;
        cin>>p[i].name>>p[i].runs>>p[i].matchesPlayed>>p[i].notoutMatches;
    }
}

void display(player *p, int n){
    for (int i=1; i<=n; i++){
        p[i].avg = p[i].runs/(p[i].matchesPlayed - p[i].notoutMatches);
        if(p[i].avg > 50){
            cout<<p[i].name<<" = "<<p[i].avg<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Number of Players: "<<endl;
    cin>>n;
    player p[n];
    input(p, n);
    cout<<"Players having average greater than 50: "<<endl;
    display(p, n);
    return 0;
}