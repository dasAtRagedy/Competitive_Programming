#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char prev = 'x';
    cin>>s;
    long n = s.length(), m = 0, t = 1;

    for(long i = 0; i < n; i++){
        if(s[i]==prev){
            t++;
        }
        else{
            if(m < t)
                m = t;
            t = 1;
            prev = s[i];
        }
    }
    if(m < t)
        cout<<t;
    else
        cout<<m;

    return 0;
}
