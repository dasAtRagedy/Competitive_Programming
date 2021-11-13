#include <iostream>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    bool sorted = true;
    bool enc0 = false;
    int pos1;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '0'){
            if(enc0 == false)
                enc0 = true;
        }
        if(s[i] == '1'){
            pos1 = i+1;
            if(enc0 == true){
                sorted = false;
            }
        }
    }

    if(sorted == true){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
        for(int i = pos1; i <= n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
