//Engenharia de Computação - 1º semestre matutino - Linguagem de Programação I - Parte 1, q.2
//Alunos: Ana Carolina, Nicolas, Pietra, Roberto e Sarah
//5 de dezembro de 2022

/*2) Crie um programa que armazene 3 nomes numa matriz de strings. Após o cadastro, você deverá criar um MENU que informe:
1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja, mostra do último ao primeiro nome cadastrado;
2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5 – SAIR*/

#include<stdio.h>
#include <ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char str1[100]={0}, str2[100]={0}, str3[100]={0};
	char * pch1;	
	char * pch2;	
	char * pch3;
	char * pa1;	
	char * pa2;	
	char * pa3;	
	char chc;
	int menu;
	int i, j, k;
	int cont=0, contA=0, contC=0;
	
	printf("\n Digite o primeiro nome: ");
	scanf("%s",&str1);
	
	printf("Digite o segundo nome: ");
	scanf("%s",&str2);
	
	printf("Digite o terceiro nome: ");
	scanf("%s",&str3);
	
	for(i=0; i<strlen(str1); i++)
	{
		   if(str1[i]>='a' && str1[i]<='z')
		   {
            str1[i] = str1[i] - 32;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
		{
            str1[i] = str1[i] + 32;
        }
    }
	for(i=0; i<strlen(str2); i++)
	{
		   if(str2[i]>='a' && str2[i]<='z')
		   {
            str2[i] = str2[i] - 32;
        }
        else if(str2[i]>='A' && str2[i]<='Z')
		{
            str2[i] = str2[i] + 32;
        }
    }
	for(i=0; i<strlen(str3); i++)
	{
		   if(str3[i]>='a' && str3[i]<='z')
		   {
            str3[i] = str3[i] - 32;
        }
        else if(str3[i]>='A' && str3[i]<='Z')
		{
            str3[i] = str3[i] + 32;
        }
    }
    do{
printf("\n\n********** MENU **********");
printf("\n Digite um dos números abaixo:");
printf("\n 1) Nomes em maiúsculo e na ordem inversa");
printf("\n 2) Quantidade de vezes que o nome PAULO foi digitado");
printf("\n 3) Quantidade de letras A cadastradas");
printf("\n 4) Quantidade de letras C no segundo nome");
printf("\n 5) Sair\n");
scanf("%d", &menu);
	
switch(menu){
case 1: 
	printf("\n %s, %s e %s",str3, str2, str1);
break;

case 2: 
pch1 = strstr (str1,"PAULO");
pch2 = strstr (str2,"PAULO");
pch3 = strstr (str3,"PAULO");
 
  if (pch1 != NULL){
    cont=cont+1;
	}
  if (pch2 != NULL)
  {
    cont=cont+1;
	}
  if (pch3 != NULL)
  {
  	cont=cont+1;
  }
printf("\n O nome PAULO aparece %d vez(es)", cont);
break;

case 3:
 pa1 = strchr(str1,'A');
 pa2 = strchr(str2,'A');
 pa3 = strchr(str3,'A');
 
  if (pa1 != NULL)
  {
    contA=contA+1;
	}
  if (pa2 != NULL)
  {
    contA=contA+1;
	}
  if (pa3 != NULL)
  {
  	contA=contA+1;
  }
printf("\n A letra A aparece %d vez(es)", contA);
break;

case 4: 
chc='C';
for(j = 0; j <= strlen(str2); j++)
  	{
  		if(str2[j] == chc)  
		{
  			contC++;
 		}
	}
     
printf("\n A letra C aparece %d vez(es) no segundo nome", contC);
break;

case 5: 
exit(0);
break;
}
} while(menu!=5);
  return 0;
}
