#include <stdio.h>
int main(){
	int canh,chieucao;
	printf("nhap do dai canh:");
	scanf("%d", &canh);
	printf("nhap chieu cao:");
	scanf("%d", &chieucao);
	float dientich=0.5*canh*chieucao;
	printf("%.2f", dientich);
}