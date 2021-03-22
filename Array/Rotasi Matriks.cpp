#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, i, j;
    int arr[101][101];	
    cin >> a >> b;
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            cin >> arr[i][j]
        }
    }
    for(j=1; j<=b; j++){
        for(i=a; i>=1; i--){
            cout << arr[i][j];
            if(i > 1)
                cout << " ";
            else
                cout << endl;
        }
    }
    return 0;
}
