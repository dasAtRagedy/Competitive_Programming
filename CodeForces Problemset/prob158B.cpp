#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, sum = 0, t;
    cin>>n;
    int a[4] = {0};
    for(int i = 0; i < n; i++){
        cin>>x;
        a[x-1]++;
    }

    sum+= a[3];
    t = min(a[0], a[2]);
    sum+=t;
    a[0]-=t;
    a[2]-=t;
    sum+=a[2];
    sum+=a[0]/4;
    a[0]%=4;
    sum+=a[1]/2;
    a[1]%=2;
    if(a[0] == 3){
        sum++;
        a[0] = 0;
    }
    if(a[1] || a[0] > 0)
        sum++;
    cout<<sum;
}
