/* Kurallar

2.Hafta �dev

1-�ki zar at�l�r
2-Zarlar�n toplam� hesaplan�r
3-�lk at��ta 7 veya 11 gelirse oyuncu kazan�r
4-�lk at��ta 2, 3 veya 12 gelirse oyuncu kaybeder
5-�lk at��ta 4,5,6,8,9,10 gelirse bu oyuncunun puan� oluyor.
6-Oyuncu 7 atmadan �nce kendi puan�n� tutturmal�d�r.

*/

// Her seferinde farkl� sonu� gelmesi i�in: srand(time(NULL)); bunun i�in de time.h k�t�phanesi kullan�l�r 

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




