#include<bits/stdc++.h>
using namespace std;

int s; /// Strenth

struct Dragon{
    int health;
    int bonus;
    int profit;
};

bool comp(Dragon a, Dragon b){
    if(a.health<=s && b.health<=s)
        return a.profit>b.profit;

    if(a.health<=s)
        return a.health<=s;
    return
}

string solve(Dragon a, int n){
    for(int i = 0; i < n; i++){
        if(s-a[i].health<0)
            return "NO";
        else
            s+=a[i].profit;
    }
}

/// test: 100 5 10 15 10 1000 110 1000 110 10 100 100
int main(){
    int n; //! Amount of dragons
    cin>>s>>n;
    Dragon a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i].health>>a[i].bonus;
        a[i].profit = a[i].bonus-a[i].health;
    }
    sort(a, a+n, comp);
    //*
    for(int i = 0; i < n; i++)
        cout<<a[i].health<<" "<<a[i].bonus<<" "<<a[i].profit<<endl;
    //*/

    cout<<solve(a, n);

    return 0;
}
