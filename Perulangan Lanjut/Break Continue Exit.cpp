#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, i;
    cin >> x;
    for(i=1; i<=x; i++){
        if(i%10 == 0)
            continue;
        if(i>= 42){
            cout << "ERROR";
            break;
        }
        cout << i << endl;
    }
    return 0;
}
