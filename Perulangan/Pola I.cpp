#include <iostream>
using namespace std;

int main(){
	int N, K, i;
	cin >> N >> K;
	for ( int i=1; i<=N; i++){
		if ( (i%K) == 0 ){
			cout << "*" << " ";
		}
		else {
			cout << i << " ";
		}
	}
	return 0;
}
