#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int bola_A[n], bola_B[n];
    for(int i=0; i<n; ++i)
        cin >> bola_A[i];
    for(int i=0; i<n; ++i)
        cin >> bola_B[i];
    int T; cin >> T;
    int x, y;
    while(T--){
        string P, Q;
        cin >> P >> x >> Q >> y;
        // bola ke-x pada baris P ditukar dengan bola ke-y pada baris Q
        if(P == "A" && Q == "B")
            swap(bola_A[x-1], bola_B[y-1]);
        else if(P == "A" && Q == "A")
            swap(bola_A[x-1], bola_A[y-1]);
        else if(P == "B" && Q == "A")
            swap(bola_B[x-1], bola_A[y-1]);
        else
            swap(bola_B[x-1], bola_B[y-1]);
    }
    for(int i=0; i<n; ++i)
        cout << bola_A[i] << " ";
    cout << endl;
    for(int i=0; i<n; ++i)
        cout << bola_B[i] << " ";
}
