#include <iostream>
using namespace std;

int main(){
    int n, s = 0, sum = 0;
    cin>>n;
    bool a[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin>>a[i][j];
            if(a[i][j])
                s++;
        }
        if(s>=2)
            sum++;
        s = 0;
    }
    cout<<sum;
    return 0;
}
