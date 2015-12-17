#include <stdio.h>

main(){

	int n,i,j,aux;
	int A[4];

	for(i=0;i<5;i++){
		printf("Inserisci posto %d",i+1);
		scanf("%d",A[i]);
	}

	/* bubble-sort */

	for(j=0;j<5;j++){

		for(i=0;i<5;i++){

			if(A[i]>A[i+1]){

				aux = A[i];
				A[i] = A[i+1];
				A[i+1] = aux;
			}
		}
	}

	/* print array ordinato */

	for(i=0;i<5;i++){
		printf("\n%d\t",A[i]);
	}
}
