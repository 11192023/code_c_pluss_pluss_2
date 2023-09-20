#include<iostream>
using namespace std;
bool check(int a[],int start,int end){
	if(start>=end){
		return true;
	}
	if(a[start]!=a[end]){
		return false;
	}
	return check(a,start+1,end-1);
}
int main(){
	int a[10]={1,2,3,4,5,5,4,3,2,1};
	if(check(a,0,9)){
		cout<<"YES";
	}else
        cout<<"NO";
        return 0;
}
