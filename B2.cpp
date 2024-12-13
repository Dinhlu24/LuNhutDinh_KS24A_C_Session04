#include <stdio.h>

int main(){
	printf("Moi nhap vao so nguyen bat ki ");
	int n;	scanf("%d", &n);
	
	if(n % 2 == 0)	printf("Day la mot so chan");
	else	printf("Day la mot so le");
}
