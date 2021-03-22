#include <stdio.h>

int main(){
    int n, m, p, x;
    scanf("%d %d %d", &n, &m, &p);
	
    int matriks1[n+1][m+1];
	  int matriks2[m+1][p+1]	;
	  int i, j, k;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &matriks1[i][j]);
        }
    }
    for(i=1; i<=m; i++){
        for(j=1; j<=p; j++){
            scanf("%d", &matriks2[i][j]);
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=p; j++){
            x=0;
            for(k=1; k<=m; k++)
                x = x + matriks1[i][k]*matriks2[k][j];
                printf("%d", x);
                if( j<p ) 
                    printf(" ");
        }
        printf("\n");
    }
	return 0;
}
