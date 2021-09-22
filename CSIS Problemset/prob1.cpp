#include<bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n==1)
        return 1;
    else{
        if(n%2==0){
            if(n/2!=1)
                cout<<n/2<<" ";
            return f(n/2);
        }
        else{
            cout<<n*3+1<<" ";
            return f(n*3+1);
        }
    }
}

int main(){
    long long n;
    cin>>n;

    cout<<n<<" ";
    if(n>1)
        cout<<f(n);

    return 0;
}
