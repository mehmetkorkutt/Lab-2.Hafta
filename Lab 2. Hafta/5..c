 // 16.02.2022 Lab 2. Hafta 5. Soru
 
#include <stdio.h> 
#define pi 3.14


int float_square(const int r) {
	
	float alan;
	
	alan = pi * (r*r);
	
	printf("Dairenin alani: %.2f",alan);
}


int main () {
	
	float r;
	
	printf("Dairenin yaricapini giriniz...\n");
	scanf("%f",&r);
	
	float_square(r);
	
	
	return 0;
}
 
