#include <stdio.h>
int main(){
	int f = 1;
	int n;
	
	printf("Entre com um numero:\n");
	scanf("%d", &n);
	
	while(n>1){
		f *= n--;
	}
	printf("%d", f);
}
