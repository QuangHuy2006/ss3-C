#include <stdio.h>
int main(){
	int n,m,tong;
	scanf("%d", &n);
	while(n!=0){
		m=n%10;
		tong+=m;
		n/=10;
	}
	printf("%d", tong);
}
	