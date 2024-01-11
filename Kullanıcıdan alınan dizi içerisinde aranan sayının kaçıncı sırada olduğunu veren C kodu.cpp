#include<stdio.h>
#include<stdio.h>

// Kullanýcýdan alýnan dizi içerisinde aranan sayýnýn kaçýncý sýrada olduðunu veren C kodu:
int main(){
	int i,n;
	printf("Kac elemanlik bir dizi istersiniz?:");
	scanf("%d",&n);
	int dizi[n];
	
	
	for(i=0;i<n;i++){
		printf("%d.sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	 int aranan;
	 printf("Aramak istediginiz sayi:");
	 scanf("%d",&aranan);
	
	printf("\n\n");
	
	int ilk=0;
	int son=n-1;
	int orta=(ilk+son)/2;
	for(i=0;i<n;i++){
		
		if(dizi[(ilk+son)/2]==aranan){
			printf("Aranan sayi %d. siradadir.",((ilk+son)/2)+1);
			break;  
		}
	  
	 
		if(orta>aranan){
			son--;
		}
		if(orta<aranan)
		  ilk++;
    	}
    	
}
	



