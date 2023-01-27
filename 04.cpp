#include <stdio.h>
#include <locale.h>
#define tmax 10

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int pg[tmax],n,r;
	
	printf("Digite o valor inicial: ");
	scanf("%d",&n);
	printf("Digite a razão: ");
	scanf("%d",&r);
	pg[0]=n;
	
	for(int i=1;i<tmax;i++){
		pg[i]=pg[i-1]*r;
	}
	for(int x=0;x<tmax;x++){
		printf("%d ",pg[x]);
	}
	return 0;
}
