#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numeroAlunos 2
#define size 100
/*crie uma estrutura representando os alunos de um determinado curso.
a estrutura deve conter a matricula, nome, nota1, nota2 e nota3
a)permina ao usuario entrar com os dados de 5 alunos
b) encontre o aluno com maior nota da p1
c) encontre o aluno com maior media geral
d)encontre o aluno com menor media geral
e) para cada aluno diga se ele foi aprovado ou reprovado, considerando 6 aprovacao*/
int main()
{
	int i, alunoMaiorNota=0, alunoMaiorMedia, alunoMenorMedia;
	float medias[numeroAlunos], maiorNota = 0, maiorMedia = 0, menorMedia = 10;
	typedef struct
	{
		char* nome[size];
		int matricula[size];
		float nota1, nota2, nota3;
	} cadastro;
	cadastro alunos[numeroAlunos];

	// a
	for (i = 0; i < numeroAlunos; i++){
		printf("Nome do Aluno %d: ", i + 1);
		fflush(stdin);
		gets(alunos[i].nome);
		printf("Matricula: ");
		scanf("%d", &alunos[i].matricula);

		printf("Nota 1: ");
		scanf("%f", &alunos[i].nota1);
		printf("\n");

		printf("Nota 2: ");
		scanf("%f", &alunos[i].nota2);
		printf("\n");

		printf("Nota 3: ");
		scanf("%f", &alunos[i].nota3);
		printf("\n");
		 // b) encontre o aluno com maior nota da p1
		if (alunos[i].nota1 > maiorNota){
			maiorNota = alunos[i].nota1;
			alunoMaiorNota = i;
		}
		
		// c) encontre o aluno com maior media geral
		medias[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
		if (medias[i] > maiorMedia){
			maiorMedia = medias[i];
			alunoMaiorMedia = i;
		}
		// d)encontre o aluno com menor media geral
		if (medias[i] < menorMedia){
			menorMedia = medias[i];
			alunoMenorMedia = i;
		}
	}
	printf("O aluno %s foi a maior nota [%.2f] na prova 1!\n",alunos[alunoMaiorNota], maiorNota);
	printf("O aluno %s foi a maior média [%.2f]!\n",alunos[alunoMaiorMedia], maiorMedia);
	printf("O aluno %s foi a menor média [%.2f]!\n",alunos[alunoMenorMedia], menorMedia);
	
	for(i=0; i<numeroAlunos; i++){
		if(medias[i]<6){
			printf("O aluno %s está reprovado!", alunos[i].nome);
		}else{
			printf("O aluno %s está aprovado!", alunos[i].nome);
		}
	}

	return 0;
}