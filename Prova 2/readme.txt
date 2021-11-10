1) tranquila, comecei 13:40 terminei 14h

2) Tranquilo, tinha um igual na lista de funcao, barbada. Tempo utilizado: [20min]

3) comecei!! [13h] Terminei!! [13:35] - tranquilo.

4)  TEMPO UTILIZADO = [+/- 1h]
[8:40] Dificil fazer a matriz transposta, [8:52] 10min pra formular toda a questao, mas sem essa parte.
[9:12]
	for(i=0; i<linhas/2; i++){
		for(j=0; j<colunas; j++){
				aux = matriz[i][j];
				//printf("\nMatriz[%d][%d] priemira exec: %d\n", i,j,matriz[i][j]);
				matriz[i][j] = matriz[j][i];
				//printf("Matriz[%d][%d segunda exec: %d\n", i,j,matriz[i][j]);
				matriz[j][i] = aux;
				//printf("MMatriz[%d][%d] priemira exec: %d\n", j,i,matriz[j][i]);
		}
	}
assim consigo fazer com que metade funcione, se eu tiro o /2 n funciona nem se eu deixo os dois com /2, pq tudo que 
eu transformo volta ao normal eventualmente, quando no for o valor de i se tornar valor de j e vice versa. n sei
oq fazer pra que isso funcione.
[9:14] mds eh claro eu posso fazer 2 for, ai um divide linhas/2 e outro colunas/2 kkkkk coisa de primata mas vou tentar
acho q funciona - spoiler n rolou
Percebi que daquele jeito ele inverte os valores de baixo da diagonal principal pra de cima, preciso q faca cgr com a secundaria.
[9:21]: tentei inverter os valores no for tipo  	
	for(i=linhas/2; i<0; i--){
		for(j=colunas; j<0; j--){
mas nao rolou k

9:30 do nada comecou a dar erro com esse for novo, 0 [main] ex4 446 cygwin_exception::open_stackdumpfile: Dumping stack trace to ex4.exe.stackdump, entao desisti

9:35 MDS ACHO Q CONSEGUI -- usei aquela logica de precisar usar a diagonal principal e tal pra criar um condicional no meio do for,
ai ele so executa metade mas pega todas as linhas e colunas (pq nao divcide por 2.) acho q foi!!
CONFIRMADO FOI EU SOU UM GENIO!!! nossa to mt feliz- 
mas ok foco, 9:36 vou estudar pra sd e dps volto pra prog. considerava essa a mais dificil, acho que as outras vao ser mais tranquilas. 



resumao:
pensei q a prova iria estar mais dificil, considerando que nao consegui fazer muitos exercicios da lista por conta da dificuldade em 
desenvolver o raciocinio logico, mas aqui foi tranquilo. Pensei que a 1 seria mais dificil, mas eu ja tinha aplicado esse conceito 
na lista se nao me engano, entao só precisei relembrar. gostei dos exercicios, por mais que nao tenham me deixado intrigado (as vezes
é bom fazer uma prova mais tranquila, desespero).
Acedito q eu tenha revisado tudo e nao tenha deixado passar nenhum erro, assim espero!! quero tentar pegar monitoria nessa cadeira
pro proximo semestre entao ne!!