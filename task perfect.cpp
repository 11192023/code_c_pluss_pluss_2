#include<iostream>
using namespace std;
bool perfect(int num ){
	int sum=1;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			sum+=i;
			if(i*i!=num){
				sum+=num/i;
			}
		}
	}
	return sum==num;
}
void f1(int a[],int n,int b[],int &m){
	for(int i=0;i<n;i++){
		if(perfect(a[i])){
			b[m]=a[i];
			m++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	int m=0;
    f1(a,n,b,m);
    const int max=1000;
    int frequency[max]={0};
    for(int i=0;i<m;i++){
    	frequency[b[i]]++;
	}
	int cnt=0;
	for(int i=0;i<m;i++){
		if(frequency[b[i]]>0){
			cout<<b[i]<<" ";
			frequency[b[i]]=0;
			cnt++;
		}
	}
	cout<<endl;
	cout<<cnt;
	return 0;
	
	
}