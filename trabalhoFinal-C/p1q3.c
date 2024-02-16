//Engenharia de Computação - 1º semestre matutino - Linguagem de Programação I - Parte 1, q.3
//Alunos: Ana Carolina, Nicolas, Pietra, Roberto e Sarah
//5 de dezembro de 2022

/*3) Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem cadastrados são: 
nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3 notas de cada disciplina que ele está cursando.
Os dados devem ser cadastrados em um vetor e/ou matriz. Após o cadastro informe:
a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou "reprovado") em cada disciplina.
b)Os dados do aluno com maior média em "LPI".
c)A média geral dos alunos na disciplina "Algoritmo".
d)A quantidade de alunos(as) reprovados em qualquer disciplina.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h>
#include <locale.h>

int main(void){
    char nome[5][100], mat[5][10], end[5][10], sex[5][1], dis1[5][50], dis2[5][50], dis3[5][50];
    float n1lp[5], n2lp[5], n3lp[5], n1alg[5], n2alg[5], n3alg[5], n1bd[5], n2bd[5], n3bd[5];
	float mlp[5], malg[5], mbd[5], mg;
	int rep, menu, i=1, n;
	
	do{
	printf("\n\t ********** ALUNO %d **********\n", i);
	
	printf(" Digite o nome:", i);
	scanf("%40[0-9a-zA-Z ]", &nome[i]);
	fflush(stdin);
	
	printf("\n Digite a matrícula:", i);
	scanf("%40[0-9a-zA-Z ]", &mat[i]);
	fflush(stdin);
	
	printf("\n Digite o endereço:", i);
	scanf("%50[0-9a-zA-Z ]", &end[i]);
	fflush(stdin);
	
	printf("\n Digite o sexo (masculino/feminino):", i);
	scanf("%s", &sex[i]);
	fflush(stdin);
	
	printf("\n Digite a primeira nota em LP1:", i);
	scanf("%f", &n1lp[i]);
	
	printf("\n Digite a segunda nota em LP1:", i);
	scanf("%f", &n2lp[i]);
	
	printf("\n Digite a terceira nota em LP1:", i);
	scanf("%f", &n3lp[i]);
	
	printf("\n Digite a primeira nota em Algoritmo:", i);
	scanf("%f", &n1alg[i]);
	
	printf("\n Digite a segunda nota em Algoritmo:", i);
	scanf("%f", &n2alg[i]);
	
	printf("\n Digite a terceira nota em Algoritmo:", i);
	scanf("%f", &n3alg[i]);

	printf("\n Digite a primeira nota em BD: ", i);
	scanf("%f", &n1bd[i]);
	
	printf("\n Digite a segunda nota em BD:", i);
	scanf("%f", &n2bd[i]);
	
	printf("\n Digite a terceira nota em BD", i);
	scanf("%f", &n3bd[i]);
	fflush(stdin);
	
mlp[i] = (n1lp[i] + n2lp[i] + n3lp[i])/3;
malg[i] = (n1alg[i] + n2alg[i] + n3alg[i])/3;
mbd[i] = (n1bd[i] + n2bd[i] + n3bd[i])/3;

if(mlp[i] < 6 || malg[i] < 6 || mbd[i] < 6){
	rep+=1;
	}
	i=i+1;	
}while(i<6);

do{
printf("\n\n **********MENU**********");
printf("\n Digite uma das opções abaixo");
printf("\n 1) Dados e situação dos alunos");
printf("\n 2) Dados do aluno com maior média em LPI");
printf("\n 3) Média geral dos alunos em Algoritmo");
printf("\n 4) Quantidade de alunos reprovados em qualquer disciplina");
printf("\n 5) Sair");
scanf("%d",&menu);

switch(menu){
	case 1:
for(i=1;i<6;i++){
	fflush(stdin);
	printf("\n\n\t ********** DADOS DO ALUNO %d **********\n", i);
	printf("\n Nome: %s", nome[i]);
	printf("\n Matrícula: %s", mat[i]);
	printf("\n Endereço: %s", end[i]);
	printf("\n Sexo: %s", sex[i]);
	printf("\n Nota 1 em LP1: %.1f", n1lp[i]);
	printf("\n Nota 2 LP1: %.1f", n2lp[i]);
	printf("\n Nota 3 LP1: %.1f", n3lp[i]);
		
	printf("\n\n Nota 1 em Algoritmo: %.1f", n1alg[i]);
	printf("\n Nota 2 em Algoritmo: %.1f", n2alg[i]);
	printf("\n Nota 3 em Algoritmo: %.1f", n3alg[i]);
	
	printf("\n\n Nota 1 em BD: %.1f", n1bd[i]);
	printf("\n Nota 2 em BD: %.1f", n2bd[i]);
	printf("\n Nota 3 em BD: %.1f", n3bd[i]);

	if(mlp[i] >= 6){
	printf("\n Aluno aprovado em LP1");
	}
	else{
	printf("\n Aluno reprovado em LP1.");
	}
	
	if(malg[i] >= 6){
	printf("\n Aluno aprovado em Algoritmo");
	}
	else{
	printf("\n Aluno reprovado em Alg");
	}
	
	if(mbd[i] >= 6){
	printf("\n Aluno aprovado em BD");
	}
	else{
	printf("\n Aluno reprovado em BD");
	}	
}
break;

case 2:
  if (mlp[1] >= mlp[2] && mlp[1] >= mlp[3] && mlp[1] >= mlp[4] && mlp[1] >= mlp[5]){
    printf("\n O Aluno 1 possui a maior média em LP1: %.1f ", mlp[1]);
}
   if(mlp[2] >= mlp[1] && mlp[2] >= mlp[3] && mlp[2] >= mlp[4] && mlp[2] >= mlp[5]){
    printf("\n O Aluno 2 possui a maior média em LP1: %.1f ", mlp[2]);
}
   if (mlp[3] >= mlp[1] && mlp[3] >= mlp[2] && mlp[3] >= mlp[4] && mlp[3] >= mlp[5]){
    printf("\n O Aluno 3 possui a maior média em LP1: %.1f ", mlp[3]);
}
   if (mlp[4] >= mlp[1] && mlp[4] >= mlp[2] && mlp[4] >= mlp[3] && mlp[4] >= mlp[5]){
    printf("\n O Aluno 4 possui a maior média em LP1: %.1f ", mlp[4]);
}
  if (mlp[5] >= mlp[1] && mlp[5] >= mlp[2] && mlp[5] >= mlp[3] && mlp[5] >= mlp[4]){
    printf("\n O Aluno 5 possui a maior média em LP1: %.1f ", mlp[5]);
}
break;

case 3:
mg = (malg[1] + malg[2] + malg[3] + malg[4] + malg[5])/5;
printf("\n Média geral dos alunos em Algoritmo: %.1f", mg);
break;

case 4:
printf("\n %d aluno(s) foi/foram reprovado(s) em alguma disciplina", rep);
break;

case 5: 
exit(0);
}
}while(menu!=5);
getch();
  return 0;
}
