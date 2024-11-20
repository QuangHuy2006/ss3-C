#include <stdio.h>
int main(){
	float C;
	printf("nhap do C:");
	scanf("%f", &C);
	float F=C*9/5+32;
	printf("%.2f=%.2f", C,F);
}