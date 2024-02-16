//Engenharia de Computação - 1º semestre matutino - Linguagem de Programação I - Parte 1, q.1
//Alunos: Ana Carolina, Nicolas, Pietra, Roberto e Sarah
//5 de dezembro de 2022
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3], i, j, contpar=0, somaimpar=0, men=0, mai=0, somtot=0, repet=0, mult=1, som5=0, vet[9], men8=0;
	printf("\n Digite um valor para cada elemento da matriz abaixo\n\n");
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++)
	{
	    printf("\n Elemento [%d][%d] = ", i, j);
		scanf("%d", &matriz[i][j]);	
	    if(matriz[i][j]%2==0)
	        {
	        contpar++;
	        }
	    if(matriz[i][j]%2!=0)
	        {
	        somaimpar+=matriz[i][j];
	        }
	    if(matriz[i][j]<men)
	        {
		    men=matriz[i][j];
		    }	
		else if(matriz[i][j]>mai)
			{
			 mai=matriz[i][j];
			}
		somtot+=matriz[i][j];
		if(matriz[i][j]==10)
			{
			repet++;
			}
		if(i==j)
		    {
			mult*=matriz[i][j];
		    }
		if(matriz[i][j]%5==0)
		    {
		    som5+=matriz[i][j];	
		    }
    	if(vet[matriz[i][j]]<8)
    	    { 
		    men8++;
		    }	    
	}	
	}
	printf("\n\n***************************************** SAIDA DE DADOS *****************************************\n\n");
	printf(" MATRIZ:\n");
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++)
	{
	    printf("  %d  ", matriz[i][j]);
	}
		printf("\n");
    }
    printf("\n Quantidade de números pares = %d\n", contpar);
    printf(" Soma dos números ímpares = %d\n", somaimpar);
    printf(" Menor número = %d\n Maior número = %d\n", men, mai);
    printf(" Média dos elementos = %d\n", somtot/9);
    printf(" Valores iguais a 10 = %d\n", repet);
    printf(" Multiplicação dos números da diagonal principal = %d\n", mult);
    printf(" Soma dos elementos divisíveis por 5 = %d\n", som5);
    printf(" Valores menores que 8 = %d\n", vet[matriz[i][j]]);
	getch();
	return 0;	
}

