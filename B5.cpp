#include <stdio.h>

int main(){
	int num1,num2,num3,tmp;
	printf("Moi nhap vao so nguyen thu nhat ");	scanf("%d", &num1);
	printf("Moi nhap vao so nguyen thu hai ");	scanf("%d", &num2);
	printf("Moi nhap vao so nguyen thu ba ");	scanf("%d", &num3);
	
	if(num3 >= num1 && num3 <= num2 || num3 <= num1 && num3 >= num2 ){
		printf("So thu ba nam trong khoang so thu nhat va thu hai");
	}
	else	printf("So thu ba khong nam trong khoang so thu nhat va so thu hai");
}
