#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, f;
    cin>>x>>y>>f;
    cout<<(long long)(ceil(x/f)*ceil(y/f));
    return 0;
}
