#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t, x, m;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cin>>t;
    sort(a, a+n);

    while(t--){
        m = 0;
        cin>>x;
        for(int i = 0; i < n; i++){
            if(x<a[i])
                break;
            m++;
        }
        cout<<m<<endl;
    }
}
