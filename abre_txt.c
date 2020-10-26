#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main(){
	FILE* f;
	f = fopen("palavras.txt","r+");
	if (!f){												//se  nao for possivel abrir o arquivo no modo solicitado entao f = FALSE
		printf("Erro - arquivo nao disponivel");
		exit(1);
	}
	int numero;
	int aleatorio;
	srand(time(0));
	char palavra[20];
	fscanf(f,"%d",&numero);     	//Lê  o que tem na primeira linha e guarda em numero (Quantidade de palavras = 7)
	printf("%d\n",numero);		
	aleatorio = rand() %numero;			//numero recebe um numero aleatorio no intervalo [0,7)
	printf("aleatorio: %d\n",aleatorio);
	for(int cont=0;cont <= aleatorio;cont++){	//inicia um loop em [0,numero] ou seja se numero == 0 o loop sera realizado uma vez.
		fscanf(f,"%s",palavra);				//toda vez que o loop é realizado palavra recebe o cont da proxima linha.
	}
	printf("%s",palavra);
	
}			

