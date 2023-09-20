#include<iostream>
using namespace std ;
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}cout<<endl;
	}cout<<endl;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			cout<<"*";
		}cout<<endl;
	}cout<<endl;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i){
			cout<<" ";}
			else{
			
			cout<<"*";}
		}cout<<endl;
	}cout<<endl;
	for (int i=1;i<=n;i++) {
	
		for(int j=1;j<=n;j++) {
			if(j<i){
			cout<<" ";}
			else{
			
			cout<<"*";
		}
		}
		cout<<endl;
	}cout<<endl;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==1||j==1||i==n||i==j){
			
			cout<<"*";}
		else {cout<<" ";}
		}cout<<endl;
	}cout<<endl;
	return 0;
} 



