#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n),result(n,-1);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int min=-1;
		for(int j=0;j<n;j++){
			if(a[j]>a[i]&&(min==-1||a[j]<a[min])){
				min=j;
			}
		}
		if(min!=-1){
			result[i]=a[min];
		}else{
			result[i]=-1;
		}
	}
	for(int i=0;i<n;i++){
		if(result[i]!=-1){
			cout<<result[i]<<" ";
		}else{
			cout<<"_"<<" ";
		}
	}
	return 0;
}
