#include <stdio.h>

int main(){
	float day,month,year;
	printf("Moi nhap ngay ");	scanf("%f", &day);
	printf("Moi nhap thang ");	scanf("%f", &month);
	printf("Moi nhap nam ");	scanf("%f", &year);
	
	if((int)day == day && (int)month == month && (int)year == year){
		if(year > 0){
			if(month > 0 && month <= 12){
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
				if(day > 0 && day <= 31)	printf("Ngay thang nam hop le");
				else	printf("Ngay khong hop le\nthang nam hop le");
		}
			else if(month == 4 || month == 6 || month == 9 || month == 11){
				if(day > 0 && day <= 30)	printf("Ngay thang nam hop le");
				else	printf("Ngay khong hop le\nthang nam hop le");
			}
			else{
				if((int)year % 400 == 0 || (int)year % 4 == 0 && (int)year % 100 != 0){
					if(day > 0 && day <= 29)	printf("Ngay thang nam hop le");
					else	printf("Ngay khong hop le\nthang nam hop le");
				}
				else{
					if(day > 0 && day <= 28)	printf("Ngay thang nam hop le");
					else	printf("Ngay khong hop le\nthang nam hop le");
				}
			}
		}
		else	printf("Thang khong hop le");
	}
	else	printf("Nam khong hop le");
}

	else	printf("Ngay hoac thang hoac nam khong hop le");
}
