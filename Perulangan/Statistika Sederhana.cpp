#include <bits/stdc++.h>
using namespace std;

int main(){
 	int bil, total, trbesar, trkecil, rata, i, n;
 	total = 0;
 	cin >> n;
 	for(i=1; i<=n; i++){
		scanf("%d", &bil);
  			total=total+bil;
 		 if(i==1){
   			trbesar=bil;
   			trkecil=bil;
  			}
  		 else if(trkecil>bil){
   		 	trkecil=bil;
  			}
   		 else if (trbesar<bil){
   		    trbesar=bil;
   			}
   		}
 	cout << trbesar << " " << trkecil;
	return 0;
}
