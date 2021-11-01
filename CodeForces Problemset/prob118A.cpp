#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "";
    string x;
    char consonants[] = "BCDFGHJKLMNPQRSTVWXZ";
    cin>>x;

    for(int i = 0; i < x.length(); i++){
        for(int j = 0; j < 20; j++){
            if(toupper(x[i]) == consonants[j]){
                a+='.';
                a+=tolower(x[i]);
                break;
            }
        }
    }
    cout<<a;

}
