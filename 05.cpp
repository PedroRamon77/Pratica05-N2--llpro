#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>
#define tmax 10

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int v[tmax],n;
	
	srand(time(NULL));
	
	for(int i=0;i<tmax;i++){
		v[i]=rand()%100;
	} 
	printf("\nDigite um n�mero entre 1 e 100: ");
	scanf("%d",&n);
	printf("\n\n");
	
	for(int y=0;y<tmax;y++){
		if(v[y]==n){
			printf("O n�mero %d esta no vetor e sua posi��o � %d�\n",n,y+1);
		}
	}
	
	return 0;
}
