#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}int rex= -1e9-1,idx;
	for(int i=0;i<n;i++){
		if(a[i]>rex){
		
		rex =a[i];
		idx=i;
	}
	}printf("%d",idx);
	return 0;
}
