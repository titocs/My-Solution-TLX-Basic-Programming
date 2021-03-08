#include <iostream>
using namespace std; 

int main(){
    int m, n, i, j, matrix[100][100], transpose[100][100];
    for(i=0; i<3; i++)
        for (j=0; j<3; j++)
            cin >> matrix[i][j];
 
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            transpose[i][j] = matrix[j][i];
 
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            cout << transpose[j][i] << " ";
        cout << "\n";
    }
    return 0;
}