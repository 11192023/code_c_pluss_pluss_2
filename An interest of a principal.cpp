#include<stdio.h>
int main(){
	float principle,rate, time ,simple;
	scanf("%f",&principle);
	scanf("%f",&rate);
	scanf("%f",&time);
	simple=(principle*rate*time)/100;
	
	printf("tien lai don : %.2f VND ",principle);
	return 0;
}
