//Engenharia de Computação - 1º semestre matutino - Linguagem de Programação I - Parte 2, q.3
//Alunos: Ana Carolina, Nicolas, Pietra, Roberto e Sarah
//5 de dezembro de 2022

/*3) Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int gols[3], i, j, mengao=0, tgols = 0, time[3], pos[3];
	char nome[3][100];
	
	for(i=0;i<3;i++){
		printf("\n\n********** Jogador %d **********", i+1);
		printf("\n Nome:");
		scanf("%40[0-9a-zA-Z]", &nome[i]);
		fflush(stdin);
		
		printf("\n\n********** TIMES **********");
		printf("\n 1) Flamengo\n 2) Corinthians\n 3) Vasco da Gama\n Time do jogador:");
		scanf("%d", &time[i]);
		fflush(stdin);
		
		printf("\n\n********** POSIÇÃO **********")/
		printf("\n 1) Artilheiro\n 2) Zagueiro\n 3) Atacante\n Posição do jogador:");
		scanf("%d", &pos[i]);
		fflush(stdin);
		
		printf("\n\n Saldo de gols marcados:");
		scanf("%d", &gols[i]);
		fflush(stdin);
	}
	for(i=0;i<3;i++){
		tgols += gols[i];
		if(time[i] == 1){
			mengao ++;
		}	
}
printf("\n\n A) Quantidade total de gols marcados = %d", tgols);
printf("\n B) Jogadores que jogam no Flamengo = %d", mengao);

printf("\n C) Todos os dados do(s) Artilheiro(s):");

if(pos[0]==1)
{
	printf("\n Nome: %s", nome[0]);
	printf("\n Time: %d", time[0]);
	printf("\n Gols marcados: %d", gols[0]);
}
if(pos[1]==1)
{
	printf("\n Nome: %s", nome[1]);
	printf("\n Time: %d", time[1]);
	printf("\n Gols marcados: %d", gols[1]);
}
if(pos[2]==1)
{
	printf("\n Nome: %s", nome[2]);
	printf("\n Time: %d", time[2]);
	printf("\n Gols marcados: %d", gols[2]);
}
getch();
}
