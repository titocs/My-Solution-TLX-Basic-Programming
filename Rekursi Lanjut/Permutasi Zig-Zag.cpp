#include <bits/stdc++.h>
using namespace std;

int ;
bool pernah[1069] = {0}, kondisi, zigzag;
bool kondisi1, kondisi2;
int catat[1069];
void tulis(int kedalaman){
    if(kedalaman >= N){
        zigzag = true;
        for(int i=1; i<N-1; ++i){
            kondisi1 = ((catat[i] > catat[i-1]) && (catat[i] > catat[i+1]));
            kondisi2 = ((catat[i] < catat[i-1]) && (catat[i] < catat[i+1]));
            if(!(kondisi1 || kondisi2))
                zigzag = false;
        }
        if(zigzag){
            for(int i=0; i<N; ++i) {
                cout << catat[i]; // Cetak
            }
            cout << endl; 
        }
    }
    else{
    // Masuk ke lapisan lebih dalam
        for (int i=1; i<=N; ++i) {
            if (!pernah[i]) { // i belum pernah?
                pernah[i] = true; // Gunakan
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false; // Selesai menggunakan
            }
        }
    }
}

int main(){
    cin >> N;
    tulis(0);
}
