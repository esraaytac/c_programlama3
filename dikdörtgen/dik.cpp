#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* rastgele 1 ile 5 arasýnda satýr ve 1 ile 10 arasýnda sütun üreten * ile dolu dikdörtgen çizdiren fonksiyon*/





void dikdortgen_ciz(){
	srand(time(NULL));	
int sat, sut, i , j;

sat = 1 + rand() % 6;
	
sut = 1 + rand() % 10;

for (i =1 ; i <= sat ; i ++){
	for (j = 1; j <= sut; j++)
	printf("*");
	printf("\n");
	
}	

	
}


int main() {

	dikdortgen_ciz();
	
	
	
	
	return 0;
}
