#include <stdio.h>
void mat( int a, int b ); //protótipo da função

int main( ) {
int a, b;
scanf("%d", &a);
scanf("%d", &b);
mat(a,b);
 return (0);
}
void mat( int a, int b ) {
	int matriz[a][b],i,j;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("Qual o valor da linha %d da coluna %d? ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<a; i++){
		 printf("\n");
		for(j=0; j<b; j++){
			printf("%d ", matriz[i][j]);
		}
	}
}