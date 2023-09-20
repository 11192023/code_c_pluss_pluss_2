/*#include<iostream>
using namespace std ;
void f1(int a[],int n,int s){
	int curent=0;
	for(int i=0;i<n-1;i++){
		curent=a[i];
		for(int j=i+1;j<=n;j++){
			if(curent==s){
				cout<<i+1<<" "<<j-1+1;
				return;
			}
			if(curent>s||j==n){
				break;
			}
			curent+=a[j];
		}
	}
    cout<<"not found";
	return;
}
int main(){
	int n,s;
	cin>>s>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	f1(a,n,s);
	return 0;
	
}*/
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	int result=gcd(a,b);
	cout<<result;
	return 0;
	
}
