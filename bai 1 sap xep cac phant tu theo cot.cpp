#include<iostream>
using namespace std;
void sx(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}
int main(){
	int n;
	cin>>n;
	int a[100][100],b[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<n;i++){
		sx(b[i],n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[j][i]<<" ";
		}
		cout<<endl;
	} 
	return 0;
	
}
