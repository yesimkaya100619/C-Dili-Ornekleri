#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan kenar bilgisine göre dikdörtgenin alan veya çevresini bulan C kodu: */

int main() {

   int uzun,kisa,alan,cevre,islem;
   printf("Dikdortgenin uzun kenarini giriniz:");
   scanf("%d",&uzun);
   printf("Dikdortgenin kisa kenarini giriniz:");
   scanf("%d",&kisa);
   cevre=2*(kisa+uzun);
   alan=kisa*uzun;
   printf("Isleminizi giriniz:");
   scanf("%d",&islem);
   if(islem==1){
   	  printf("Cevre:%d",cevre);
   }
   if(islem==2){
   	  printf("Alan:%d",alan);
   }
	
	
	
	
	return 0;
}
