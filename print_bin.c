#include <stdio.h>
#define DIM_INT 16

void stampa_bin(int);

main(){
    char resp[2];
    int n;
    resp[0]='s';
    
    while(resp[0]=='s'){
        printf("Insert n: ");
        scanf("%d",&n);
        print("Rappr. binaria: ");
        stampa_bin(n);
        printf("Vuoi continuare? ");
        scanf("%s",&resp[0]);
    }
}

void stampa_bin(a){
    int i,j;
    char A[DIM_INT];
    if(v==0){
        printf("%d",a);
    }
    else{
        for(i=0;a!=0;i++){
            A[i] = a%2;
            a/=2;
        }
        for(j=i-1,j>=0;j--){
            printf("%d",A[j]);
        }
    }
}
