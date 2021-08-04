#include <bits/stdc++.h>
using namespace std;

void draw(int n){
    if(n == 0)
        return ;
    draw(n-1);
    for(int i=0; i<n; ++i){
        cout << "*";
    }
    cout << endl;
    draw(n-1);
}

int main(){
    int N; cin >> N;
    draw(N);
}
