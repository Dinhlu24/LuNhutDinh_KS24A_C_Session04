#include <stdio.h>

int main(){
	int a,b,c,max,mid,min;
	printf("Moi nhap vao so dau tien : ");	scanf("%d",&a);
	printf("Moi nhap vao so thu hai : ");	scanf("%d",&b);
	printf("Moi nhap vao so thu ba : ");	scanf("%d",&c);
	
	if(a == b && b == c){
		printf("Ca ba so deu bang nhau va bang %d",a);
	}
	else{
		if(a >= b && a >= c)	max = a; if(b >= a && b >= a)	max = b; if(c >= a && c >= b)	max = c;
	
		if(a <= b && a <= c)	min = a; if(b <= a && b <= c)	min = b; if(c <= a && c <= b)	min = c;
		
		if(min < a && a < max)	mid = a;
		else if(min < b && b < max)	mid = b;
		else if(min < c && c < max)	mid = c;
		
		if(a == b && a > c || a == c && a > b|| b == c && b > a){
			printf("Co hai so bang nhau va lon hon so con lai duoc sap xep tu nho den lon : %d %d %d",min,max,max);
		}
		else if(a == b && a < c || a == c && a < b|| b == c && b < a){
			printf("Co hai so bang nhau va be hon so con lai duoc sap xep tu nho den lon : %d %d %d",min,min,max);
		}
		else{
			printf("Day so duoc sap xep tu nho den lon la : %d %d %d",min,mid,max);
		}
	}
}
