#include <stdio.h>

int main(){
	int n;
	int i = 1;
	
	printf("Entre com o numero de alunos:\n");
	scanf("%d", &n);
	
	while(i<=n){
		float n1;
		float n2;
		float m;
		
		printf("Entre com a primeira nota:\n");
		scanf("%f", &n1);
		printf("Entre com a segunda nota:\n");
		scanf("%f", &n2);
		
		m = (n1 + n2) / 2;
		printf("Media do aluno %d: %.2f\n", i, m);
		i++;
	}
}
