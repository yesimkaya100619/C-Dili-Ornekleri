#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan say�n�n asal olup olmad���n� d�nd�ren C kodu: */

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
