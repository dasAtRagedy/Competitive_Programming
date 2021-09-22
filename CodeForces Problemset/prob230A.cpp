#include<bits/stdc++.h>
using namespace std;


struct Dragon{
    int health;
    int bonus;
};

bool comp(Dragon a, Dragon b){
    return a.health>b.health;
}

int main(){
    int s, n; //! Dragon's strenth; Amount of dragons
    cin>>s>>n;
    Dragon a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i].health>>a[i].bonus;

    sort(a, a+n, comp);

    for(int i = 0; i < n; i++){
        if(a[i].health>s){
            s=-1;
            cout<<"NO";
            break;
        }
        else ws+=a[i].bonus;
    }
    if(s>-1) cout<<"YES";
    return 0;
}
