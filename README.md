# sayi--tahmin-oyunu
c örnekleri

#include <stdio.h>
#include <stdlib.h>
 /* Sayı Tahmin Oyunu::*/

int main() {
	
	 int A=50,Sayi;
	 printf("*****Sayi Tahmin Oyunu*****\n\n");
	 
	 while(Sayi=A)
	{
	  printf("Bir sayi giriniz:"),
	 scanf("%d",&Sayi);
	
	
	 if(Sayi<A){
	 	printf("Aranan Sayi Daha Buyuk.\n");
	 }
	 else{
	 	if(Sayi>A){
	 		printf("Aranan Sayi Daha Kucuktur.\n");
		 }
		else{
			if(Sayi==A){
			printf("Tebrikler Aranan Sayiyi Buldunuz.\n");break;
		    }
		    
		}
	 }
	   
   }
	
	
	
	
	
	return 0;
}
