#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>>n;
    if (trunc(n) == n)
        cout<< n <<" "<< n << endl;
    else if (n<0)
        cout << trunc(n)-1 << " "<< trunc(n) << endl;
    else
        cout << trunc(n) << " " << trunc(n)+1<< endl;
    return 0;
}
