#include<stdio.h>
int main(){
	float a,b,c=26,d;
	printf("nhap luong co ban: ");
	scanf("%f",&a);
	printf("nhap ngay cong thuc te: ");
	scanf("%f",&b);
	if(b>c){
		float luong=a*(b/c);
		printf("luong: %.3f",luong);
	}else{
		 float luong=a*(b/c)*(d=c-b)*(150/100);
		printf("luong: %.3f",luong);
	}
}
