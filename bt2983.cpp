#include<iostream>
using namespace std;
int main(){
	long long a, b,c,d;
	cin>>a>>b>>c>>d;
	long long max= a,min=a;
	if(b>max){
	max=b;}
	if(c>max){
	max=c;}
	if(d>max){
	max=d;}
	if(b<min){
	min=b;}
	if(c<min){
	min=c;}
	if(d<min){
	min=d;}
	cout<< max << " " << min;
}
