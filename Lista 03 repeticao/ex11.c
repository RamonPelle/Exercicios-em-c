#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* 11. Dado um número inteiro positivo, determine a sua decomposição em fatores primos. A
saída do programa deve ser semelhante ao exemplo abaixo:
180 2
90 2
45 3
15 3
5 5
1
 */

int main(){
	setlocale(LC_ALL, "Portuguese");
    int n, i=2;

    printf("Digite o número que você quer decompor: ");
    scanf("%d", &n);
        while (n>1){
            if(n%i!=0){
                i++;
            }
            printf("%d  %d\n",n,i);
            n = n/i;
        }
        printf("1");       
    return 0;
}
