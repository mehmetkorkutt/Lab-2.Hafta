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
	
	int zar1,zar2,toplam,puan,i=0;
	
	
	srand(time(NULL));
	
	zar1 = rand() % 6 + 1;
	zar2 = rand() % 6 + 1;
	
	toplam = zar1 + zar2;
	
	if(i==0) {
	
	
	switch(toplam) {
		
		case 7: 
		
			printf("Tebrikler. Oyunu kazandiniz...\n");
			break;
			
			
		case 11:
			
			printf("Tebrikler. Oyunu kazandiniz...\n");
			break;
			
			
		case 2:
			
			printf("Oyunu kaybettiniz...\n");
			break;
			
		case 3:
			
			printf("Oyunu kaybettiniz...\n");
			break;
			
		case 12: 
		
			printf("Oyunu kaybettiniz...\n");
			break;
			
			
		case 4:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
			
		case 5:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
			
		case 6:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
			
		case 8:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
			
		case 9:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
			
		case 10:
			
			puan= toplam;
			printf("Puaniniz: %d\n",puan);
			i++;
			break;
	}
}

	if(i==1 && puan==toplam) {
		printf("Puan ve skorunuz ayni, bundan sonra 7 atarsaniz oyunu kazanabilirsiniz...\n");
		i++;
	}
	
	if(i==2 && toplam == 7) {
		
		printf("Oyunu puan esitligi ve sonrasinda 7 atarak kazandiniz...\n");
	}

	
	
	return 0;
}
	
	
	





