#include <stdio.h>
#include <stdlib.h>
 /*  for(int i =0; i<n; i++){
            
            if(fibo>n){
                break;
            } */
        //}
/*4. Leia um numero positivo do usuário, então, calcule e imprima a sequência Fibonacci (Fn = Fn - 1 + Fn - 2) até o primeiro número
superior ao número lido. Exemplo: se o usuário informou o número 30, a sequencia a ser impressa será: 0 1 1 2 3 5 8 13
21 34. */

int main(){
    int n, a = 0, b = 1, fibo;
    printf("Digite um numero: ");
    do{
        scanf("%d", &n);
    }while(n < 0); //vai repetir caso o n seja negativo

    if(n==0)
        printf("0;");

    else{
        printf("%d; ", a);
        do{
            fibo = a + b; //soma os anteriores
            b = a; //b recebe a, ou seja, o valor anterior
            a = fibo; //a recebe fibo, a soma anterior
            printf("%d; ", fibo);
        }while(fibo<n);

    }
}





// int main(){
// 	int n=0, i=0;
// 	printf("Digite um número: ");
// 	scanf("%d", &n);
// 	printf("Sequência Fibonacci: \n");
// 	while(i-1<=n){
// 		if(i==0){
// 			printf("0\n");
// 			i++;
// 		}else if(i==1){
// 			printf("1\n");
// 			i++;
// 		}else{
// 			i = (n-1) + (n-2);

// 		}
// 	}
// }
