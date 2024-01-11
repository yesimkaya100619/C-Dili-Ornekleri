#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sayý ile hazýr kodda bulunan sayýlar arasýnda yer deðiþtirme iþlemini yapa C kodu: */

int main() {
	
	int A,B,C;
	A=10,B=23;
	printf("A=%d-B=%d\n",A,B);
	
	C=A;
	A=B;
	B=C;
	
	printf("A=%d-B=%d",A,B);
	

	return 0;
}
