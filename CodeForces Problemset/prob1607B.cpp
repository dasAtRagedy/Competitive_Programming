#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x, n;
    cin>>x>>n;
    if(abs(x)%2==1){
        if(abs(n)%4 == 0)
            cout<<x<<endl;
        else if(abs(n)%4 == 1)
            cout<<x+n<<endl;
        else if(abs(n)%4 == 2)
            cout<<x-1<<endl;
        else if(abs(n)%4 == 3)
            cout<<x-1-n<<endl;
    }
    else if(abs(x)%2==0){
        if(abs(n)%4 == 0)
            cout<<x<<endl;
        else if(abs(n)%4 == 1)
            cout<<x-n<<endl;
        else if(abs(n)%4 == 2)
            cout<<x+1<<endl;
        else if(abs(n)%4 == 3)
            cout<<x+1+n<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
