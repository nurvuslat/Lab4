//girilen 10 adet say�dan pozitif ve negatifleri ayr� ayr� bulan program

#include <stdio.h>

int main(){
	
	int i, sayi, negatif, pozitif;
	
	negatif=0;
	pozitif=0;
		
	for(i=1; i<=10; i++){
		
		printf("Sayi Girin:");
		scanf("%d", &sayi);	

		if(sayi<0){
			negatif=negatif+1;
	 	}
		else if(sayi>=0){
			pozitif=pozitif+1;
		}
	}
			printf("Pozitif Tamsayi: %d\nNegatif Tamsayi: %d",pozitif,negatif);

			return 0;
}
		

