#include <iostream>
using namespace std;

int main(){
    int bn, i, jml, n;
    cin >> bn;
  	jml = 0;
    for(i=1; i<=bn; i++){
   	    cin >> n;
  	    jml = jml + n;
    }
    cout << jml << endl;
    return 0;
}
