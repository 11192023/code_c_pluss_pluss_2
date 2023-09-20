#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool nt (int n){
	if(n<2)return false;
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
int main(){
	int n;
	scanf("%d",&n);
	if(nt(n)){
		printf("la so nguyen to : %d",n);
	}else printf("khong la so nguyen to : %d",n);
	return 0;
}
