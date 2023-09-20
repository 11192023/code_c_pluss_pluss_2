#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int cmp2 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
	return abs(*x)-abs(*y);
}
  int cmp1 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
	if(abs(*x) != abs(*y)){
	return abs(*x)-abs(*y);
}
if(*x>0)return -1;
}
int sumdigit (int n){
	int res =0;
	while(n){
		res+= n%10;
		n/=10;
	}
	return 0;
}
int cmp3 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
	return sumdigit(*x)-sumdigit(*y);
}
int cmp4 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
	if(sumdigit(*x)!=sumdigit(*y)){
		return sumdigit(*x)-sumdigit(*y);
	}
	if(*x>*y)return -1;
}
int cmp5 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
	if(*x%2==0)return -1;
	return 1;
}
int cmp6 (const void*a,const void*b){
	int*x=(int*)a;
	int*y=(int*)b;
if(*x%2==0&&*y%2==1)return -1;
if(*x%2==1&&*y%2==0)return 1;
if(*x%2==0&&*y%2==0)return *y-*x;
return *x-*y;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	qsort(a,n,sizeof(int),cmp1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,n,sizeof(int),cmp2);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,n,sizeof(int),cmp3);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,n,sizeof(int),cmp4);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,n,sizeof(int),cmp5);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	qsort(a,n,sizeof(int),cmp6);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
