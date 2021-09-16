#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    int f[m], sm;
    for(int i = 0; i < m; i++)
        cin>>f[i];

    sort(f, f+m);
    sm = f[m-1]-f[0];
    for(int i = 0; i < m-n+1; i++){
        if(sm>f[i+n-1]-f[i])
            sm = f[i+n-1]-f[i];
    }
    cout<<sm;
}
