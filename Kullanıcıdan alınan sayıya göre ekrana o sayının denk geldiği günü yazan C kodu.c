#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan say�ya g�re ekrana o say�n�n denk geldi�i g�n� yazan C kodu: */

int main() {
	
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	switch(sayi){
		
		case 1:printf("Pazartesi");break;
		case 2:printf("Sali");break;
		case 3:printf("Carsamba");break;
		case 4:printf("Persembe");break;
		case 5:printf("Cuma");break;
		case 6:printf("Cumartesi");break;
		case 7:printf("Pazar");break;
		default:printf("Hatali Sayi Girisi");

		
	}
	
	
	
	
	
	
	
	return 0;
}
