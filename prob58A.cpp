#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    string hello = "hello";

    for(int i = 0, sum = 0; i < s.length(); i++){
        if(s[i]=="hello"[sum])
            sum++;
        if(sum==5)
            return "YES";
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
