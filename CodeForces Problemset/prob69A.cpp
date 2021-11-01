#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, a[3] = {0};
    cin>>n;
    while(n--){
        for(int i = 0; i < 3; i++){
            cin>>x;
            a[i]+=x;
        }
    }
    if(a[0] == 0 && a[1] == 0 && a[2] == 0)
        cout<<"YES";
    else
        cout<<"NO";

}
