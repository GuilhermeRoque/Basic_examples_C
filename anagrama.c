#include <stdio.h>
#include <string.h>

int repetidas(char letra,char palavra[]){
	int ocorrencia =0;
	for (int y=0;y<strlen(palavra);y++)
		if (letra == palavra[y])
			ocorrencia++;
	
	return ocorrencia;
		
}
int main(){

char palavra[20];
char outra_palavra[20];
int achou;

printf("Escreva uma palavra:  ");
scanf("%s",palavra);
printf("Escreva uma outra palavra:  ");
scanf("%s",outra_palavra);


if (strlen(palavra) != strlen(outra_palavra)){
	printf("Nao é um anagrama");
	return 0;
}

else{
	for(int x=0;x<strlen(palavra);x++){	
		achou=0;
		for (int y=0;y<strlen(outra_palavra);y++)
			if(palavra[x] == outra_palavra[y]){	
				if (repetidas(palavra[x],palavra) != repetidas(outra_palavra[y],outra_palavra)){
					printf("Nao Anagrama\n");
					return 0;
				}
				achou=1;
				break;
			}
		if(!achou){
			printf("Nao é um anagrama");
			return 0;
		}
		
	}
}

printf("Anagrama");

}