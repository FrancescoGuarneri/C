#include <stdio.h>

#define N 4
#define P 3
#define M 5

int mat1[N][P];
int mat2[P][M];
int pmat[N][M];

// MATRICE 1 4X3  N&P//
// MATRICE 2 3X5 P&M//
// PRODOTTO 4X5 N*M //

main(){
	int i,j,k;
	
	/* inserimento valori mat1 */
	
	printf("Caricamento matrice 1 \n\n");
	for(i=0;i<N;i++){
		printf("Inserisci linea %d colonna %d\n\n",i,j);
		scanf("%d",&mat1[i][j]);
	}
	
	/* inserimento valori mat2 */
	
	printf("Caricamento matrice 2 \n\n");
	for(i=0;i<M;i++){
		printf("Inserisci linea %d colonna %d\n\n",i,j);
		scanf("%d",&mat1[i][j]);
	}
	
	/* calcolo prodotto */
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			pmat[i][j] = 0;
			for(k=0;k<P;k++){
				pmat[i][j] = pmat[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}
	
	/* print prodotto mat1*mat2 */
	
	printf("PRODUCT: \n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d\t",pmat[i][j]);
		}
	}
	
}
