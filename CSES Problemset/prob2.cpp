#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n-1];

    for(int i = 0; i < n-1; i++)
        cin>>a[i];

    sort(a, a+n-1);
    for(int i = 0; i < n-1; i++){
        if(i+1!=a[i]){
            cout<<i+1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}
