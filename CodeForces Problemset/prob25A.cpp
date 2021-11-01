#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    int odd = 0;
    int even = 0;
    int indexo = -1;
    int indexe = -1;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x%2 == 0){
            even++;
            indexe = i+1;
        }
        else{
            odd++;
            indexo = i+1;
        }
    }

    if(odd == 1){
        cout<<indexo;
    }
    else
        cout<<indexe;

}
