#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan 20 say� i�erisinde; pozitif say� say�s�n� ve pozitif say�lar�n ortalamas�n� bulan C kodu: */

int main() {
	
	int sayi,i,sayac=0,toplam=0;
	float ort;
	for(i=1;i<=20;i++){
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);	
		
		if(sayi>0){
			toplam+=sayi;
			sayac++;
		}
	}
	
	printf("%d tane pozitif sayi var\n",sayac);
	ort=toplam/sayac;
	
	printf("Pozitif sayilarin toplami:%d\n",toplam);
    printf("\n");
	printf("Pozitif sayilarin ortalamasi:%.2f",ort);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
