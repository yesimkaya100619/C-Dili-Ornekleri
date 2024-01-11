#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan 20 sayý içerisinde; pozitif sayý sayýsýný ve pozitif sayýlarýn ortalamasýný bulan C kodu: */

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
