#include<iostream>
using namespace std;
int x,y,d;
int extended(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}
	else
{
	extended(b,a%b);
	int tmp=x;
	x=y;
	y=tmp-(a/b)*y;
}
}
int main(){
	int a, b;
	cin>>a>>b;
	extended(a,b);
	cout<<d<<" "<<x<<" "<<y<<endl;
	return 0;
}
