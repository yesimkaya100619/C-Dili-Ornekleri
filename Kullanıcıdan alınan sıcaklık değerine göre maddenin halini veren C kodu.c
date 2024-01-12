#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sýcaklýk deðerine göre maddenin halini veren C kodu:  */

int main() {
	int sicaklik;
	
	//sýcaklýk<=0 ise yaz madde katý halde
    //0<sýcaklýk<100 ise yaz madde sývý haldedir
    //sýcaklýk>=100 ise yaz madde gaz halindedir
    printf("maddenin sicaklik degerini giriniz:");
    scanf("%d",&sicaklik);
    
    if(sicaklik<=0){
    	printf("madde kati haldedir");
    	
	}
	
	if(0<sicaklik<100){
		printf("madde sivi haldedir");
	}
	
    else{
		printf("madde gaz haldedir");
	}
	

	
	return 0;
}
