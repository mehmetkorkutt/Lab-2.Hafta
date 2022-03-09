// 16.02.2022 Lab 2. Hafta 2. Soru

//deneme1.c

#include<stdio.h>

void fonk(void);

int gid = 287 // Global int deðiþken tanýmlamasý

int main(void)
{
	printf("deneme1.c gid degisken degeri: %d\n",gid);
	
	fonk(); // deneme2.c dosyasýndaki fonk()
	
	return 0;
}
