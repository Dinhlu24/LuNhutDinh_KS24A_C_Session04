#include <stdio.h>

int main(){
	printf("Moi nhap vao so thang ");
	int month;	scanf("%d", &month);
	if((float)month == month && month > 0 && month < 13){
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("%d la thang co 31 ngay", month);
			
		else if(month == 4 || month == 6 || month == 9 || month == 11)
			printf("%d la thang co 30 ngay",month);
		else{
			printf("%d la thang co 28 ngay neu nam khong nhuan va 29 ngay neu nam nhuan",month);
		}
	}
	else	printf("Thang nhap vao khong hop le");
}
