#include<stdio.h>
int main(){
	int number1,number2,number3;
	int max,min,reamining;
	printf("nhap number1: ");
	scanf("%d",&number1);
	printf("nhap number2: ");
	scanf("%d",&number2);
	printf("nhap number3: ");
	scanf("%d",&number3);
	if(number1 > number2 && number1 > number3){
		max = number1;
		if(number2 > number3){
			reamining = number2;
			min = number3;
		} else {
			reamining = number3;
			min = number2;
		}
	} else if(number2 > number1 && number2 > number3){
		max = number2;
		if(number1 > number3){
			reamining = number1;
			min = number3;
		} else {
			reamining = number3;
			min = number1;
		}
	} else {
		max = number3;
		if(number1 > number2){
			reamining = number1;
			min = number2;
		} else {
			reamining = number2;
			min = number1;
		}
	}
	printf("day giam dan %d %d %d",max,reamining,min);
}
    
