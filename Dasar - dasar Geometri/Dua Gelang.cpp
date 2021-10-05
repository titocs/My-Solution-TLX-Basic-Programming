#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x1, y1, x2, y2, r1, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    /*
    syarat bersentuhan:
    1. Jika |y2-y1|^2 + |x2-x1|^2 <= (r1 + r2)^2
    2. Jika |y2-y1|^2 + |x2-x1|^2 >= |r2-r1|^2
    */

    if(pow(abs(y2 - y1), 2) + pow(abs(x2 - x1), 2) <= pow((r1 + r2), 2) && 
       pow(abs(y2 - y1), 2) + pow(abs(x2 - x1), 2) >= pow(abs(r2 - r1), 2))
        cout << "bersentuhan";
    else
        cout << "tidak bersentuhan";
}
