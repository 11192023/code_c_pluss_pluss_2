#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cout<<"input the quanlity for n: ";
	cin>>n;
	int a[100];
	cout<<"input the price"<<endl;
	for(int i=0;i<n;i++){
		cout<<"the price "<<i+1<<": ";
		cin>>a[i];
	}
	sort(a,a+n,cmp);
    cout<<"input of the t: ";
    int t;
    cin>>t;
    while(t--){
    	cout<<"input the number monney want to change: ";
    	int k;
    	cin>>k;
    	int res=0;
    	for(int i=0;i<n;i++){
    		res+=k/a[i];
    		k%=a[i];
		}
		cout<<"the number of monney were changed : "<<res<<endl;
	}
	return 0;
}
