#include<iostream>
using namespace std;
int isprime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return num>1;
}
void f1(int a[],int n,int b[],int &count){
	for(int i=0;i<n;i++){
		if(isprime(a[i])){
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
