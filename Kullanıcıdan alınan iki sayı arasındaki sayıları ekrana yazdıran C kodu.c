#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan iki sayý arasýndaki sayýlarý ekrana yazdýran C kodu: */

int main() {
	
	 int i,y,x;
	 printf("Baþ deðeri giriniz:");
	 scanf("%d",&y);
	 printf("Son deðeri giriniz:");
	 scanf("%d",&x);
	 	 
	 for(i=y;i<x;i++) {
	 	if(y!=i){

	 	printf("%d ",i);
     }
	}
	
	
	printf("\n\n");
	printf("BASARILARININ DEVAMINI DILERIM");
	

	return 0;
}
