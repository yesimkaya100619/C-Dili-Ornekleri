#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan iki say� aras�ndaki say�lar� ekrana yazd�ran C kodu: */

int main() {
	
	 int i,y,x;
	 printf("Ba� de�eri giriniz:");
	 scanf("%d",&y);
	 printf("Son de�eri giriniz:");
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
