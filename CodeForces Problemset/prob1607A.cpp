#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a[26];
    int sum = 0;
    string k, s;
    cin>>k>>s;
    for(int i = 0; i < 26; i++)
        a[(int)k[i] - 97] = i;
    for(int i = 1; i < s.length(); i++)
        sum+=abs(a[(int)s[i] - 97] - a[(int)s[i-1] - 97]);
    cout<<sum<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
