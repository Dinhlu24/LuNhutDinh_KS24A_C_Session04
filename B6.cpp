#include <stdio.h>

int main(){
	float dau,cuoi,tien;
	printf("Moi nhap chi so cong to dien dau thang ");	scanf("%f",&dau);
	printf("Moi nhap chi so cong to dien cuoi thang ");	scanf("%f", &cuoi);
	float sodien= cuoi - dau;
	if(sodien < 0){
		printf("Du lieu khong hop le");
	}
	else if (sodien == 0)	printf("Thang nay ban khong tieu thu dien");
	else{
		if(sodien < 50)
			tien = sodien*10.000;
		else if(sodien < 100)	
			tien = (50*10.000)+(sodien - 50)* 15.000;
		else if(sodien < 150)
			tien = 50*(10.000 + 15.000) + (sodien - 100)*20.000;
		else if(sodien < 200)
			tien = 50*(10.000 + 15.000 + 2*20.000) + (sodien - 150)*25.000;
		else
			tien = 50*(10.000 + 15.000 + 2*20.000 + 3*25.000) + (sodien - 200)*30.000;
		
		printf("tien dien thang nay cua ban la %f", tien);
	}
}
