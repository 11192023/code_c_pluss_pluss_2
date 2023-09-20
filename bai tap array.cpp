#include<iostream>
using namespace std;
const unsigned s =100;
int main(){
	int n ;
    cin>>n;
	int a[s];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	int sum =0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
	int count =0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
