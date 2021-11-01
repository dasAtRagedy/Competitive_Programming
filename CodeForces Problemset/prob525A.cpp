#include<bits/stdc++.h>
using namespace std;

int main(){
    int abc[26] = {0};
    int n;
    int sum = 0;
    string s;
    cin>>n>>s;
    for(int i = 0; i < n - 1; i++){
        abc[s[2*i]-'a']++;
        if(abc[s[2*i+1]-'A']>0)
            abc[s[2*i+1]-'A']--;
        else
            sum++;
    }
    cout<<sum;
}
