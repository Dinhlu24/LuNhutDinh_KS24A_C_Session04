#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen bat ki ");
	int n;	scanf("%d", &n);
	if(n % 3 == 0 && n % 5 == 0)	printf("Day la so chia het cho 3 va 5");
	else if(n % 3 == 0)	printf("Day la so chia het cho 3");
	else if(n % 5 == 0)	printf("Day la so chia het cho 5");
	else	printf("So nay khong chia het cho ca 3 va 5");
}
