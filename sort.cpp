#include<iostream>
using namespace std;
void interchange(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
}
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void insert_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
int min(int a,int b){
	if(a<b)return a;
	return b;
}
int max(int a,int b){
	if(a>b)return a;
	return b;
}
int cnt[1000]={0};
int main(){
	int n;
	cin>>n;
	int a[100];
	int min1=INT_MAX;
	int max1=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		min1=min(min1,a[i]);
		max1=max(max1,a[i]);
	}
	for(int i=min1;i<=max1;i++){
		if(cnt[i]){
			for(int k=0;k<cnt[i];k++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
