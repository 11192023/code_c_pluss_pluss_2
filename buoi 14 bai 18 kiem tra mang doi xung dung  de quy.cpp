#include<iostream>
using namespace std;
bool check(long long a[],long long start,long long end){
	if(start>=end){
		return true;
	}
	if(a[start]!=a[end]){
		return false;
	}
	return check(a,start+1,end-1);
	
	
}
int main(){
	long long n;
	cin>>n;
	long long *a=new long long[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(check(a,0,n-1)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	delete[]a;
	return 0;
}
