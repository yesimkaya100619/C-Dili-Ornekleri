#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan s�cakl�k de�erine g�re maddenin halini veren C kodu:  */

int main() {
	int sicaklik;
	
	//s�cakl�k<=0 ise yaz madde kat� halde
    //0<s�cakl�k<100 ise yaz madde s�v� haldedir
    //s�cakl�k>=100 ise yaz madde gaz halindedir
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
