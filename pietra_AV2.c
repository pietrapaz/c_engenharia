#include<stdio.h>
#include<stdlib.h>

leValidaNota(){
	float nf,n1,n2,n3,ap1,ap2,ap3,av1,av2,av3,pp,tf,as,p1,p2,p3;
	int repeticao;
	
		printf("\n---NOTA 1---\n");
		printf("escreva a nota da avaliacao presencial 1: \n");
		scanf("%f", &ap1);
	
		printf("escreva a nota da avaliacao presencial 2: \n");
		scanf("%f", &ap2);
	
		printf("escreva a nota da avaliacao virtual 1: \n");
		scanf("%f", &av1);
	
		printf("escreva a nota da avaliacao virtual 2: \n");
		scanf("%f", &av2);	
		
		printf("\n---NOTA 2---\n");
		printf("escreva a nota da avaliacao presencial 3: \n");
		scanf("%f", &ap3);
	
		printf("escreva a nota da avaliacao virtual 3: \n");
		scanf("%f", &av3);
		
		printf("\n---NOTA 3---\n");
		printf("digite a nota da avaliacao pratica:\n");
		scanf("%f", &pp);
	
		printf("digite a nota do trabalho final:\n");
		scanf("%f", &tf);
		
		printf("digite a nota das atividades supervisionadas:\n");
		scanf("%f", &as);
		
}

calculaN1(){
	float n1,ap1,ap2,av1,av2,p1,p2;
	
	leValidaNota();
	
	p1 = (ap1 + 0,1) * av1;
	p2 = (ap2 + 0,1) * av2;
	if(p1>10){
		p1=10;
	} else if (p1<0){
		p1=0;
	}
	if(p2>10){
		p2=10;
	} else if (p2<0){
		p2=0;
	}
	
	n1 = (0,4 * p1) + (0,6 * p2);
	if(n1>10){
		n1=10;
	} else if (n1<0){
		n1=0;
	}
	
	printf("\nvalor da nota 1: %.2f\n", n1);
}

calculaN2(){
	float n2,ap3,av3,p3;
	
	leValidaNota();
	
	p3 = ap3 + 0,1 * av3;
	if(p3>10){
		p3=10;
	} else if (p3<0){
		p3=0;
	}
	
	n2 = p3;
	if(n2>10){
		n2=10;
	} else if (n2<0){
		n2=0;
	}
	
	printf("\nvalor da nota 2: %.2f\n", n2);
}

calculaN3(){
	float n3,pp,tf,as;
	
	leValidaNota();
	
	n3 = 0,5 * pp + 0,3 * tf + 0,2 * as;
	if(n3>10){
		n3=10;
	} else if (n3<0){
		n3=0;
	}
	
	printf("\nvalor da nota 3: %.2f\n", n3);
}

calculaNF(){
	float nf,n1,n2,n3;
	
	nf = (n1+n2+n3)/3;
}

mostraResultado(){
	// mostrar nota final e uma mensagem de aprovado ou reprovado
	float nf;
	
	calculaNF();
	
	printf("nota final: %.2f", nf);
	
	if(nf<7){
		printf("\nreprovado");
	} else if (nf>=7){
		printf("\naprovado");
	}
	
}

int main(){ 
	float nf,n1,n2,n3,ap1,ap2,ap3,av1,av2,av3,pp,tf,as,p1,p2,p3;
	char nomeAluno;
	int repeticao;
	
	printf("\nescreva o nome do aluno:\n");
	scanf("%c", &nomeAluno);
	
	leValidaNota();
	
}
