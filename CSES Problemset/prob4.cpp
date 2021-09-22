#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n], x = 0;

    for(long i = 0; i < n; i++)
        cin>>a[i];

    for(long i = 1; i < n; i++){
        if(a[i-1]>a[i]){
            x+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<x;

    return 0;
}
