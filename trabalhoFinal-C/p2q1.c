//Engenharia de Computação - 1º semestre matutino - Linguagem de Programação I - Parte 2, q.1
//Alunos: Ana Carolina, Nicolas, Pietra, Roberto e Sarah
//5 de dezembro de 2022

/*1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos. Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i=1, sex[3], masc=0, id[3];
	char nome[3][100];
	float mensal[3], med;
	
	do {
	printf("\n\t ********** ALUNO %d ********** ",i);
	printf("\n Digite o nome:", i);
	scanf("%40[0-9a-zA-Z ]", &nome[i]);
	fflush(stdin);
	
	printf("\n Selecione o sexo 1.Masculino/2.Feminino \nSexo: ", i);
	scanf("%d", &sex[i]);
	fflush(stdin);
	
	printf("\n Digite a idade:", i);
	scanf("%d", &id[i]);
	fflush(stdin);
	
	printf("\n Digite a mensalidade: ", i);
	scanf("%f", &mensal[i]);
	fflush(stdin);
	
	i=i+1;
}while(i<4);

  if (mensal[1] <= mensal[2] && mensal[1] <= mensal[3]){
    printf("\n\n O valor da menor mensalidade é: R$%.1f", mensal[1]);
}
   if (mensal[2] <= mensal[1] && mensal[2] <= mensal[3]){
    printf("\n\n O valor da menor mensalidade é: R$%.1f", mensal[2]);
}
   if (mensal[3] <= mensal[1] && mensal[3] <= mensal[2]){
    printf("\n\n O valor da menor mensalidade é: R$%.1f ", mensal[3]);
}

if(sex[1]==1){
masc+=1;
}

if(sex[2]==1){
masc+=1;
}

if(sex[3]==1){
masc+=1;
}
printf("\n\n Quantidade de alunos do sexo masculino: %d", masc);

med = (mensal[1] + mensal[2] + mensal[3])/3;
printf("\n\n A média das mensalidades é: R$%.1f\n", med);

 	if(id[1] >= id[2] && id[1] >= id[3]){
    printf("\n\n O Aluno 1 é o mais velho\n Idade: %i\n Nome do aluno mais velho: %s ", id[1], nome[1]);
}
   if (id[2] >= id[1] && id[2] >= id[3]){
     printf("\n\n O Aluno 2 é o mais velho\n Idade: %i\n Nome: %s ", id[2], nome[2]);
}
   if (id[3] >= id[1] && id[3] >= id[2])
    printf("\n\n O Aluno 3 é o mais velho\n Idade: %i\n Nome: %s", id[3], nome[3]);
}
