#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.length()>10){
            cout<<(string)(s[0]+to_string(s.length()-2)+s[s.length()-1])<<endl;
        } else{
            cout<<s<<endl;
        }
    }
}
