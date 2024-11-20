#include <stdio.h>
int main(){
	int n;
	int reversed=0;
	printf("in vao so bat ky:");
	scanf("%d", &n);
	while(n!=0){
		int remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	printf("so dao nguoc la %d", reversed);
}
	