#include<iostream>
using namespace std;
int n,a[100],k;
void result(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void tri(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			result();
		}else{
			tri(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	a[0]=0;
	tri(1);
	return 0;
}
