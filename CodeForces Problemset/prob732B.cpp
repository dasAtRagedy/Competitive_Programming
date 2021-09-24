#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, s = 0;
    cin>>n>>k;
    int a[n];
    cin>>a[0];
    for(int i = 1; i < n; i++){
        cin>>a[i];
        if(a[i-1]+a[i]<k){
            s+=k-a[i-1]-a[i];
            a[i]=k-a[i-1];
        }
    }
    cout<<s<<"\n"<<a[0];
    for(int i = 1; i < n; i++){
        cout<<" "<<a[i];
    }


    return 0;
}
/*
3 5
2 0 1
//*/
