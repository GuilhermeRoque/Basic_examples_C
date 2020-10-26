#include <stdio.h>

int loops = 0;


int F(int n,int soma){
	
	printf("soma %d\n",soma);
	n = n-1;
	
	int y =1;
	int x =0;
	int z;
	
	for (int cont=0; cont < n; cont++){
		z = x;
		x = y + x;
		y = z;
	}
	
	soma = x + soma;
	loops++;
	
	printf("soma %d\n",soma);
	
	if (loops == 2){
		return soma;
	}
	F(n,soma);
}
	
		
int main(){
	int n;
	int final;
	printf("Escreva um valor:");
	scanf("%d",&n);
	final = F(n,0);
	printf("o %d numero de fibonacci e %d\n",n,final);
}

