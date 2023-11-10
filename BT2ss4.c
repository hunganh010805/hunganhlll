#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("nhap number1 :");
	scanf("%d",&number1);
	printf("nhap number2 :");
	scanf("%d",&number2);
	printf("nhap number3 :");
	scanf("%d",&number3);
	if (number1 + number2 > number3 || number1 + number3 > number2 || number2 + number3 > number1){
		printf("tam giac thuong");
	} else if (number1==number2 || number1==number3){
		printf("tam giac can");
	} else if ((number1*number1)+(number2*number2)==(number3)*(number3)){
		printf("tam giac vuong");
	} else if ((number1*number1)+(number2*number2)==(number3)*(number3) && (number1==number2 || number1==number3)){
		printf("tam giac vuong can");
	} else (number1==number2==number3){
		printf("tam giac deu "); 	
	} 
} 
