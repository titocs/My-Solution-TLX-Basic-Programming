#include <bits/stdc++.h>
using namespace std;

int checkPowerofTwo(int n);
int main(){
   	int num;
    cin >> num;
	if (checkPowerofTwo(num) == 1)
		cout << "ya" << endl;
    else
      	cout << "bukan" << endl;
   return 0;
}

int checkPowerofTwo(int x){
  	if (x == 0)
     	return 0;
	while( x != 1){
		if(x % 2 != 0)
        	return 0;
         x /= 2;
   	}
   	return 1;
}
