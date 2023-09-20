#include<iostream>
using namespace std;
bool isprime (int num){
	if(num<2)return false;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
void f1(int arra[] ,unsigned sizea,int arrb[],unsigned &sizeb){
	for(int i=0;i<sizea;i++){
		if(isprime(arra[i])){
			arrb[sizeb]=arra[i];
			sizeb++;
		}
	}
}
void bubble_sort(int arrb[],int frequency[],int sizeb){
	for(int i=0;i<sizeb-1;i++){
		for(int j=0;j<sizeb-i-1;j++){
			if(frequency[arrb[j]]>frequency[arrb[j+1]]){
				int tmp=arrb[j];
				arrb[j]=arrb[j+1];
				arrb[j+1]=tmp;
			}
		}
	}
}
void sort_of_frequency(int arrb[],unsigned sizeb){
	const int max =1000;
	 int frequency[max]={0};
	for(int i=0;i<sizeb;i++){
		frequency[arrb[i]]++;
	}
	bubble_sort(arrb,frequency,sizeb);
	int cnt=0;
	for(int i=0;i<sizeb;i++){
		if(frequency[arrb[i]]>0){
			cout<<arrb[i]<<" ";
			frequency[arrb[i]]=0;
			cnt++;
		}
	}
	cout<<endl;
	cout<<cnt;
}
int main(){
 unsigned sizea;
 cin>>sizea;
 int arra[100];
 for(int i=0;i<sizea;i++){
 	cin>>arra[i];
 }	
 int arrb[sizea];
 unsigned sizeb=0;
 f1(arra,sizea,arrb,sizeb);
 sort_of_frequency(arrb,sizeb);
 return 0;
 
}