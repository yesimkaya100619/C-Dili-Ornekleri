#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan say� ile haz�r kodda bulunan say�lar aras�nda yer de�i�tirme i�lemini yapa C kodu: */

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
