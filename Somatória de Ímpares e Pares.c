#include <stdio.h>
int main(){
	int num;
	int par = 0;
	int impar = 0;
	
	printf("Entre com um numero inteiro:\n");
	
	while(num != -1){
		scanf("%d", &num);
		if(num % 2 == 0)
			par += num;
			break;
		impar += num;
		continue;
	}
	printf("Soma dos pares: %d\nSoma dos impares: %d", par, impar);
}
