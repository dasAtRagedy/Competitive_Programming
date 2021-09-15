#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n, greater<int>());
    for(int i = 0, a = 0; i < n; i++){
        a+=arr[i];
        if(a>sum/2){
            cout<<i+1;
            return 0;
        }
    }
}
