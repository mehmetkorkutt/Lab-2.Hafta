/* Kurallar

2.Hafta Ödev

1-Ýki zar atýlýr
2-Zarlarýn toplamý hesaplanýr
3-Ýlk atýþta 7 veya 11 gelirse oyuncu kazanýr
4-Ýlk atýþta 2, 3 veya 12 gelirse oyuncu kaybeder
5-Ýlk atýþta 4,5,6,8,9,10 gelirse bu oyuncunun puaný oluyor.
6-Oyuncu 7 atmadan önce kendi puanýný tutturmalýdýr.

*/

// Her seferinde farklý sonuç gelmesi için: srand(time(NULL)); bunun için de time.h kütüphanesi kullanýlýr 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	
	int zar1,zar2,toplam,puan;
	
	
	srand(time(NULL));
	
	zar1 = rand() % 6 + 1;
	zar2 = rand() % 6 + 1;
	
	toplam = zar1 + zar2;
	
	int i=0;
	
	
	if(i==0) {
	
	
	switch(toplam) {
		
		case 7: 
			printf("Oyunu kazandiniz. (Ilk atista 7 attiniz...)");
			i++;
			break;
		
		case 11: 
			printf("Oyunu kazandiniz. (Ilk atista 11 attiniz...)");
			i++;
			break;
		
		case 2:
			printf("Oyunu kaybettiniz. (Ilk atista 2 attimiz...)");
			i++;
			break;
		
		case 3:
			printf("Oyunu kaybettiniz. (Ilk atista 3 attimiz...)");
			i++;
			break;
		
		case 12:
			printf("Oyunu kaybettiniz. (Ilk atista 12 attiniz...)");
			i++;
			break;
		}
}
	
	if(i==1) {
	
		
		switch(toplam) {
		
		case 4:
			puan=4;
			return main();
			i++;
			break;
		
		case 5:
			puan=5;
			return main();
			i++;
			break;
		
		case 6:
			puan=6;
			return main();
			i++;
			break;
		
		case 8:
			puan=8;
			return main();
			i++;
			break;
		case 9:
			puan=9;
			return main();
			i++;
			break;
		
		case 10:
			puan=10;
			return main();
			i++;
			break;
	}	
	
}

if(i==2 && toplam==7) printf("Oyunu puan ve ikinci bir 7 atarak kazandiniz...");
		
		
	return 0;
}




