#include<iostream>
using namespace std;
int fibonanci(int n){
	if(n==1||n==0){
		return 1;
	}
	long  long fn2=0;
	long long fn1=1;
	for(int i=3;i<=93;i++){
		long long fn=fn1+fn2;
		if(fn==n){
			return 1;
		}
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
void f1(int a[],int n,int b[],int &count){
	for(int i=0;i<n;i++){
		if(fibonanci(a[i])){
			b[count]=a[i];
			count++;
		}
	}
}
void bubble_sort(int frequency[],int b[],int count){
	for(int i=0;i<count-1;i++){
		for(int j=0;j<count-i-1;j++){
			if(frequency[b[j]]>frequency[b[j+1]]){
				int tmp=b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
		}
	}
}
void sort(int b[],int count){
	const int max=100;
	int frequency[max]={0};
	for(int i=0;i<count;i++){
		frequency[b[i]]++;
	}
	bubble_sort(frequency,b,count);
	int cnt=0;
	for(int i=0;i<count;i++){
		if(frequency[b[i]]>0){
			cout<<b[i]<<" ";
			cnt++;
			frequency[b[i]]=0;
		}
	}
	cout<<endl;
	cout<<cnt;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[100];
	int count=0;
	f1(a,n,b,count);
	sort(b,count);
	return 0;
	
}
