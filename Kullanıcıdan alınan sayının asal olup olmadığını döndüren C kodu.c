#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sayýnýn asal olup olmadýðýný döndüren C kodu: */

int main() {
	
	int sayi,i;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<=sayi;i++){
		
		if(sayi%i==0){
			printf("Asal sayi degildir.");break;
		}
		if(sayi%i!=0){
			printf("Asal sayidir.");break;
		}
	}
	

	return 0;
}
