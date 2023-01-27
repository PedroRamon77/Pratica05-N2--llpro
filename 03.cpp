#include <stdio.h>
#include <locale.h>
#define tmax 10

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int pa[tmax],a,r,t;
	
	printf("Digite o valor inicial: ");
	scanf("%d",&a);
	printf("Digite a razão: ");
	scanf("%d",&r);
	pa[0]=a;
	
	for(int i=1;i<tmax;i++){
		pa[i]=pa[i-1]+r;
	}
	for(int x=0;x<tmax;x++){
		printf("%d ",pa[x]);
	}
	
	return 0;	
}
