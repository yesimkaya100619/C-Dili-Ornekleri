#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�dan al�nan say�n�n basamak de�erlerini ekrana yazd�ran C kodu: */

int main() {
	
	 int sayi,i,basamak,a;
	 printf("Kac basamakli sayi gireceksiniz:");
	 scanf("%d",&a);
	 printf("Bir sayi giriniz:");
	 scanf("%d",&sayi);
	 
	 while(sayi>0){
	 	
	 	for(i=1;i<=a;i++){
	 		printf("%d.",i);
	    
	 	basamak=sayi%10;
	 	printf("Basamak: %d\n",basamak);
	 	sayi=sayi/10;
	    }
	 }
	 
	
	
	
	
	
	return 0;
}
