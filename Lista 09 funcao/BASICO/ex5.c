#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
/*5. Faça uma função que receba por parâmetro os valores necessário para o cálculo da fórmula de báskara e imprima as
suas raízes, caso seja possível calcular.*/
void bhaskara(int a, int b, int c);
int main() {
	float a,b, c, resp;
    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
     scanf("%f", &c);
	bhaskara(a,b,c);

	return 0;
}

void bhaskara(int a, int b, int c){
	float delta, x1, x2;
	delta = b*b - 4*a*c;
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);

            if(delta < 0){
            printf("A equacao nao possui raizes reais\n");
            }else{
            printf("O valor de x1: %.2f\n", x1);
            printf("O valor de x2: %.2f\n", x2);
            }
}
