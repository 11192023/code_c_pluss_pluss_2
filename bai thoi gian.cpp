#include<iostream>
using namespace std;
void optimal(int &hour,int &minute,int&second,int&k){
	second+=k;
	minute+=second/60;
	second%=60;
	hour+=minute/60;
	minute%=60;
	hour%=24;
}
int main(){
	int hour,minute,second,k;
	char character;
	cout<<"enter of the k but you want to fill"<<endl;
	cin>>k;
	cout<<"enter of the time current get along with character (:) at the center 2 element hour and minute and continue minute and second when you fill information "<<endl;
	cin>>hour>>character>>minute>>character>>second;
	optimal(hour,minute,second,k);
	if(hour<10)
		cout<<"0";
		cout<<hour<<character;
	if(minute<10)
	cout<<"0";
	cout<<minute<<character;
	if(second<10)
	cout<<"0";
	cout<<second;
	return 0;
}