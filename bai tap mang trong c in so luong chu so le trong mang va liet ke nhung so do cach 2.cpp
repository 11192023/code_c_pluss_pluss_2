#include<stdio.h>
int check(int n){
	while (n){
		int r =n%10;
		if(r%2==0)return 0;
		n/=10;
	}return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n], b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}int cnt =0;
	for(int i=0;i<n;i++){
		if(check(a[i])){
			b[cnt]=a[i];
			++cnt;
		}
	}printf("%d\n",cnt);
	
	for(int i=0;i<cnt;i++){
		
			printf("%d ",b[i]);
		
	}return 0;
}
