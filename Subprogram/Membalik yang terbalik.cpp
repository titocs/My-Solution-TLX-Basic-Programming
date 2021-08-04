#include <bits/stdc++.h>
using namespace std;

int reverse_angka(int x){
    int temp = x;
    int ret = 0;

    while(temp > 0){
        ret = (ret * 10) + (temp % 10);
        temp = temp/10;
    }
    return ret;
}

int main(){
    int A, B; cin >> A >> B;
    int sum = reverse_angka(A) + reverse_angka(B);
    cout << reverse_angka(sum);
}
