#include <bits/stdc++.h>
using namespace std;

int N, K;
int catat[1069];
void tulis(int kedalaman){
    if(kedalaman >= K){
        for(int i=0; i<K; ++i){
            cout << catat[i] << " ";
        }
        cout << endl;
    }
    else{
        for(int i=1; i<=N; ++i){
            if(i > catat[kedalaman - 1]){
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
            }
        }
    }
}

int main(){
    cin >> N >> K;
    tulis(0);
}
