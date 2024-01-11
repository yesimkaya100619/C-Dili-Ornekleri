#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

/* Kullanýcýdan alýnan cümle veya kelime içerisinde yine kullanýcýdan alýnan harfi bulan C kodu:  */

   
 char bul(char cumle[],int es,char harf){
 	
      int i=strlen(cumle);
	  
	  while(i>=0){
	  	
         if(cumle[i]==harf){
         	return i;
		 }
	  	   
	  	 else{
	  	 	return -1;
		   }
	  	
	  	i--;
	  }
	   	
 	
 	
 }



int main() {
	
	char cumle[50];
	printf("Lutfen bir kelime veya cumle giriniz: ");
	gets(cumle);
	
	char harf;
	printf("Aranan harfi giriniz: ");
	scanf("%c",&harf);
	
	int sonuc=bul(cumle,50,harf);
	  
	  printf("%d  ",sonuc);
	  
	  
	
	return 0;
}
