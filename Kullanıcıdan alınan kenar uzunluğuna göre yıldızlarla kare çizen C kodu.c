#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan kenar uzunluðuna göre yýldýzlarla kare çizen C kodu: */

int main() {
	   
	int i,j,sayi;
	printf("Karenin Kenar Uzunluðunu Giriniz Lütfen:  ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++) {
			 
			printf("* ");
		}
		printf("\n");
	}
	  
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
