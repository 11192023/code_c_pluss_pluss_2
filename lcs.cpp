#include<iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int n=a.size();
	int m=b.size();
	int f[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				f[i][j]=0;
			}else{
				if(a[i-1]==b[j-1]){
					f[i][j]=f[i-1][j-1]+1;
				}else{
					f[i][j]=max(f[i-1][j],f[i][j-1]);
				}
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<f[n][m];
	return 0;
}
