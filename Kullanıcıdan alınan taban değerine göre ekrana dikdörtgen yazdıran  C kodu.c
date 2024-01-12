#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan taban deðerine göre ekrana dikdörtgen yazdýran  C kodu: */

int main() {
	
	int taban,i,j;
	
	printf("Lutfen Bir Taban Degeri Giriniz:");
	scanf("%d",&taban);
	
	for(i=0;i<taban;i++)
	{
		for(j=0;j<taban;j++){
			printf("*");
		}
		printf("\n");
	}
	

	
	return 0;
}
