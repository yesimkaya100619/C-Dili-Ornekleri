#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sayýya göre matris oluþturup matris matrisin elemanlarýna o anki indisin karesini veren C kodu: */

int main() {
	
	int sayi=1,i,j,N;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		
		for(j=0;j<N;j++){
			printf("  %d  ",sayi);
			sayi++;
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
