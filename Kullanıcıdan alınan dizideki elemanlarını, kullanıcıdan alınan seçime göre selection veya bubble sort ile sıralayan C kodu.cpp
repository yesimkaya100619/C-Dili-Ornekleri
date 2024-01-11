#include<stdio.h>
#include<stdlib.h>

//Kullanýcýdan alýnan dizideki elemanlarýný, kullanýcýdan alýnan seçime göre selection veya bubble sort ile sýralayan C kodu:


void degis(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void degis1(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void yazdir(int dizi[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",dizi[i]);
	}
}



void yazdir1(int dizi[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",dizi[i]);
	}
}


int main(){
	int i,n;
	printf("Kac elemanli bir dizi istersiniz:");
	scanf("%d",&n);
	printf("\n");
	int dizi[n];
	
	for(i=0;i<n;i++){
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
	printf("Hangi arama ile diziyi siralamak istersiniz:(\n 1=selection sort \n 2=bubble sort)\n\n");
	int secim;
	printf("Lutfen seciminizi girin:");
	scanf("%d",&secim);
	
	
  	switch (secim){
	  
  	/*selection sort:*/	
		case 1:
			int i,j,min;
			for(i=0;i<n-1;i++){
				min=i;
				for(j=i+1;j<n;j++){
					if(dizi[min]>dizi[j]){
						min=j;     
				}
				 degis(&dizi[min],&dizi[j]);    
			}
							
			yazdir(dizi,n);
		  break;
			
			
	/*Bubble sort:*/		
		case 2:	
	        int i,j;
			for(i=0;i<n;i++){
				for(j=0;j<n-1-i;j++){
					if(dizi[j]>dizi[j+1]){
						degis1(&dizi[j],&dizi[j+1]);
						
						}
					}
				}
					yazdir1(dizi,n);
			} 
			break;
	
}
return 0;
}


