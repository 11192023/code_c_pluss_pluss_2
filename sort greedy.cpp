#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
    int b[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int ok=1;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
			ok=0;
			break;
		}
	}
	if(ok){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
