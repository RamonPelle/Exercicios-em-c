#include <stdio.h>
#include <stdlib.h>

/* 3. Escreva um programa que gere aleatoriamente números entre 1.000 a 1.999, inc lusive, e exiba aqueles que
divididos por 11 dão um resto igual a 5. */
int main(){
	int i, n;
	srand(time(NULL));
	for(i = 0; i<100; i++){
    	n = 1000 + rand()%1999;
		if(n%11==5){
			printf("%d\n", n);
		}
	}

	return 0;
}
