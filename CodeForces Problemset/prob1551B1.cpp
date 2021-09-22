#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a0=0, a1=0;
    string s;
    cin>>n;
    for(int j = 0, len; j < n; j++){
        int a[26] = {0};
        cin>>s;
        len = s.length();
        for(int i = 0; i < len; i++){
            a[s[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(a[i]==1) a0++;
            else if(a[i]>1) a1++;
        }
        cout<<a0/2+a1<<endl;
        a0 = 0;
        a1 = 0;
    }
    return 0;
}
