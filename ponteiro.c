/*
ponteiro:Possui um endereco proprio pois tambem é guardado na memoria, como conteudo 
possui um outro endereco.
ex: int* x; 
* especifica que x é um ponteiro
&x = onde esta guardado este ponteiro
x = endereco que o ponteiro esta guardando
int especifica o tipo de dado e tamanho do espaço alocado do 
conteudo do endereco guardado
*x = conteudo do endereco guardado pelo ponteiro

array é o ponteiro da primeira
de varias variaveis alocadas sequencialmente na memoria;

declarar um array é alocar sequencialmente na memoria

a ideia de matriz é ter um conjunto de array ou seja um ponteiro de ponteiros;

na pratica declarar uma matriz aloca os arrays sequencialmente

a variavel matriz por si, como no caso do exemplo abaixo 'x',
é um ponteiro que possui um endereco como qualquer outra coisa, que tem
como conteudo seu proprio endereco por ser declarada como um 'array de array'
que é igual ao endereco do ponteiro do seu primeiro array que tem como conteudo
o endereco da sua primeira variavel x[0][0].
ex: 
int x[2][2];
*/

#include <stdio.h>
#include <stdlib.h>

void Exemplo1(){
	int x = 10;
	int* y;
	
	y = &x;
	printf("Endereco de y  %d \n",&y);
	printf("Conteudo de y %d == endereco de x %d  \n",y,&x);
	printf("Conteudo do conteudo de y %d == Conteudo de x  %d \n",*y,x);
}

void Exemplo2(){
	int x[2];
	x[0]=1;
	x[1]=2;
	
	int soma = ((int)(&x[0])+ (int)(sizeof(int)));
	printf("Endereco de x %d\n",&x);
/* O conteudo de um array é o seu endereco que
é o endereco da primeira variavel deste mes array*/
	printf("Conteudo de x %d == Endereco da primeira variavel do array x %d\n",x,&x[0]);
	printf("Provando afirmaçao anterior:\n");
	printf("Conteudo do Conteudo de x %d == Conteudo da primeira variavel de x %d\n",*x,x[0]);
	printf("Endereco da primeira variavel + 4bytes %d\n",soma);
	printf("Endereco da segunda variavel %d\n",&x[1]);
	
}

void Exemplo3(){
	int x[2];
	x[0]=1;
	x[1]=2;
	
	int* y;
	
	int len_x = sizeof(x)/sizeof(int);
	int len_y = sizeof(y)/sizeof(int);

	
	y = x; 
/* o conteudo de y (o endereco que este guarda) 
agora é o mesmo que conteudo de x(o endereco da array, da primeira variavel)
como o conteudo de x é um endereco logo x é um ponteiro
*/
	printf(" Conteudo de y %d == Conteudo de x %d\n",y,x);
	printf ("Que e igual Endereco da primeira variavel do array x %d\n",&x[0]);
	printf("Conteudo do Conteudo de y: %d == Conteudo do Conteudo de x: %d\n",*y,*x);
	printf("Que e igual conteudo da primeira variavel de x: %d\n",x[0]);
	printf("%d\n",x[1]); 
/* 
x[alpha] busca o conteudo do endereco alpha vezez 4bytes(pois é do tipo int)
a frente o endereco de x
por isso x[0] é igua a *x
 */
	
	printf("%d\n",y[1]); // por isso esse bagulho funciona
	printf("Prova que y[1] nao 'pertence' a y e sim é apenas\n");
	printf("o que esta escrito 4bytes a frente na memoria:\n"); 
	printf("len de x %d != len de y %d\n",len_x,len_y); //pois y é um ponteiro e nao um array
	
}

void Exemplo4(){
	int x[2][2];
	x[0][0]=1;
	x[1][0]=3;
	
	printf("Endereco de x %d\n",&x);
	printf("Conteudo de x %d\n",x);
	printf("Conteudo do conteudo de x %d\n",*x);
	printf("Endereco do primeiro array/ponteiro %d\n",&x[0]);
	printf("Conteudo do primeiro array/ponteiro %d\n",x[0]);
	printf("Endereco da primeira variavel %d\n\n\n",&x[0][0]);
	//provando
	printf("Conteudo do conteudo do conteudo de x %d\n",**x);
	printf("Conteudo do conteudo de x[0] %d\n",*x[0]);
	printf("Conteudo da primeira variavel %d\n",x[0][0]);
	
	/* Conteudo de uma matriz é o endereco de seu primeiro array
	conteudo do conteudo de uma matriz é o endereco da primeira variavel do primeiro array
	conteudo do conteudo do conteudo de x é o conteudo da primeira variavel do primeiro array.
	*/
	
}

void Exemplo5(){
	
	int x[2][2];
	int s =2;
	
	printf("%p",s);
	
}

int main(){
	Exemplo5();
}

