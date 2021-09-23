#include<bits/stdc++.h>
using namespace std;

long long solve(long long y, long long x){
    if(x>=y){
        if(x%2==0)
            return ((x-1)*(x-1)+y);
        else
            return (x*x-y+1);
    }
    else{
        if(y%2!=0)
            return ((y-1)*(y-1)+x);
        else
            return (y*y-x+1);
    }
}

int main(){
    long long n, x, y;
    cin>>n;
    for(long long i = 0; i < n; i++){
        cin>>y>>x;
        cout<<solve(y, x)<<endl;
    }
    return 0;
}
