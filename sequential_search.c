#include <stdio.h>
#define MAX 1000

main(){
	char vet[MAX];
	char c;
	int i,n;

	/* lunghezza array (max1000) */

	do{
		printf("Numero elementi: \n");
		scanf("%d",&n);

	}
	while(n<1 || n>MAX);

	/* immissione caratteri */

	for(i=0;i<n;i++){
		printf("Carattere %d\n",i);
		scanf("%1s",&vet[i]);
	}

	printf("elemento da ricercare:  ");
	scanf("%1s",&c);

	/* ricerca sequenziale di un valore */

	i=0;
	while(c!=vet[i] && i<n-1){
		++i;
	}
	if(c==vet[i]){
		printf("elemento %c presente in posizione %d",c,i);}
	else {
		printf("elemento non esistente\n");
	}


}
