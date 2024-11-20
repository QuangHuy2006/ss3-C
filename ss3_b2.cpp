#include <stdio.h>
int main(){
	float r,pi=3.14;
	printf("nhap ban kinh:");
	scanf("%f", &r);
	float chuvi,dientich;
	chuvi=2*pi*r;
	dientich=pi*r*r;
	printf("chu vi = %.2f", chuvi);
	printf("\ndien tich = %.2f", dientich);
}