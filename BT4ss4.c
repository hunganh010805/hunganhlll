#include<stdio.h>
int main(){
	int year,month;
	printf("nhap nam: ");
	scanf("%d",&year);
	printf("nhap thang: ");
	scanf("%d",&month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang %d co 31 ngay",month);
			break;
		case 2:
			if(year%4==0 && year%100!=0){
				printf("thang %d co 29 ngay",month);
			} else{
				printf("thang %d co 28 ngay",month);
			}
		break;
		case 4: case 6: case 9: case 11:
			printf("thang %d co 30 ngay",month);
		default:
			printf("thang khong hop le, moi nhap lai thang");
	}
}
