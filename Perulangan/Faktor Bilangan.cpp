#include <iostream>
using namespace std;

int main(){
	int n, i;
	scanf("%d", &n);
	
	for(i=n; i>0; i--){
		if(n%i ==0 )
			cout << i << endl;
	}
	return 0;
}