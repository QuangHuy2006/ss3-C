#include <stdio.h>
int main(){
	float diemtoan, diemvan, diemtienganh;
	printf("nhap diem toan:");
	scanf("%f",&diemtoan);
	printf("nhap diem van:");
	scanf("%f",&diemvan);
	printf("nhap diem tieng anh:");
	scanf("%f",&diemtienganh);
	float tong,tb;
	tong=diemtoan+diemvan+diemtienganh;
	tb=tong/3;
	printf("tong=%.2f", tong);
	printf("\ndiem trung binh=%.2f", tb);
}