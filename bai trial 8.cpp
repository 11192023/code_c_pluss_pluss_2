#include <iostream>
using namespace std;
bool isprime(int num){
	if(num<2)return false;
	for(int i=2;i*i<=num;i++){
		if(num%i==0)return false;
	}
	return true;
}
void f1(int arrA[],int sizeA,int arrB[],int &sizeB){
	for(int i=0;i<sizeA;i++){
		if(isprime[arrA[i]]){
			arrB[sizeB]=arrA[i];
			sizeB++;
		}
	}
}
void bubble_sort(int arrB[],int frequency[],int sizeB){
	for(int i=0;i<sizeB-1;i++){
		for(int j=0;j<sizeB-i-1;j++){
			if(frequency[arrB[j]]>frequency[arrB[j+1]]){
				int tmp =arrB[j];
				arrB[j]=arrB[j+1];
				arrB[j+1]=tmp;
			}
		}
	}
}
void sort_of_frequency(int arrB[],int sizeB){
	const int max=100;
	int frequency[max]={0};
	for(int i=0;i<sizeB;i++){
		frequency[arrB[i]]++;
	}
	bubble_sort(arrB,frequency,sizeB);
	int cnt=0;
	for(int i=0;i<sizeB;i++){
		if(frequency[arrB[i]]>0){
			cout<<arrB[i]<<" ";
			cnt++;
			frequency[arrB[i]]=0;
		}
	}
	cout<<endl;
	cout<<cnt;
}

int main(){
	int sizeA;
	cin>>sizeA;
	int arrA[100];
	for(int i=0;i<sizeA;i++){
		cin>>arrA[i];
	}
	int arrB[sizeA];
	int sizeB=0;
	f1(arrA,sizeA,arrB,sizeB);
	sort_of_frequency(arrB,sizeB);
	return 0;
}