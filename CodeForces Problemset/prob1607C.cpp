#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long a[n], m;
    long long sum = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a+n);
    m = a[0];
    for(int i = 0; i < n; i++){
        m = max(m, a[i]-sum);
        sum+=a[i]-sum;
    }
    cout<<"ATS: "<<m<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
