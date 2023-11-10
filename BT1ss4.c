#include<stdio.h>
int main(){
	int number;
	printf("nhap so nao ban thich : ");
	scanf("%d",&number); 
	if(number % 3 ==0 && number % 5 == 0){
	printf("so nay chia het cho 3 va 5");
	} else{
	printf("so nay khong chia het cho 3 và 5");
	}
} 
