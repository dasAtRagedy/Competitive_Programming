#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string a;   // Given input
    char x = 2; // For checking what was previous char
    int b = 1;  // "Players in a row"-counter

    cin>>a;

    if(a.length()<7){
        cout<<"NO";
        return 0;
    }

    for(int i = 0; i < a.length(); i++){
        if(a[i] == x)
            b++;
        else{
            b = 1;
            x = a[i];
        }
        if(b == 7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
