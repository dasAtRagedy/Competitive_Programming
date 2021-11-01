#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool a = true;
    if(s.length() == 1){
        if(isupper(s[0]))
            cout<<(char)tolower(s[0]);
        else
            cout<<(char)toupper(s[0]);
    }
    else{
        for(int i = 1; i < s.length(); i++){
            if(islower(s[i])){
                a = false;
                break;
            }
        }
        if(a){
            transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
            if(isupper(s[0]))
                s[0] = tolower(s[0]);
            else
                s[0] = toupper(s[0]);
        }
        cout<<s;
    }
    return 0;
}
