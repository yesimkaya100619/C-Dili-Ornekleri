#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan say�ya g�re matris olu�turup matris matrisin elemanlar�na o anki indisin karesini veren C kodu: */

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
