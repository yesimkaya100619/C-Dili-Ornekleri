#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan kenar uzunlu�una g�re y�ld�zlarla kare �izen C kodu: */

int main() {
	   
	int i,j,sayi;
	printf("Karenin Kenar Uzunlu�unu Giriniz L�tfen:  ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++) {
			 
			printf("* ");
		}
		printf("\n");
	}
	  
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
