#include <iostream>
using namespace std;

int main(){
    int n, x, cek=0;
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> x;
        int cek = 0;
        for(int j=2; j<x; ++j){
            if(cek > 2)
                break;
            if(x % j == 0)
                cek++;
        }
        if(cek <= 2)
            cout << "YA" << "\n";
        else
            cout << "BUKAN" << "\n";
	}
}
