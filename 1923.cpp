#include<iostream>
using namespace std;
double bin_pow(int a,int b){
	double res=1;
	while(b){
		if(b%2==1){
			res*=a;
		}
		a*=a;
		b/=2;
	}
	return res;
}
int main(){
	double n;
	while(1){
		system("cls");
		cout<<"enter of the number: ";
		cin>>n;
		if(n<=10){
			cout<<"invalid"<<endl;
			system("pause");
		}else{
			break;
		}
	}
	double s1=n*(n+1);
	double s2=bin_pow(n,n);
	double s3=1/n;
	cout<<s1<<" "<<s2<<" "<<s3<<endl;
	return 0;
}