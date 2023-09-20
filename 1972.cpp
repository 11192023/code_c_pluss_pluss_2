#include<iostream>
#include<set>
using namespace std;
set<long long>s;
void init(){
	long long f[93];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0;i<=92;i++){
		s.insert(f[i]);
	}
}
int main(){
	init();
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
    int ans=-1;
    int sum=0;
    int cot=0;
    for(int i=0;i<m;i++){
    	int tmp=0;
    	int dem=0;
    	for(int j=0;j<n;j++){
    		if(s.count(a[j][i])==1){
    			dem++;
    			tmp+=a[j][i];
			}
		}
		if(dem>ans){
			cot=i;
			ans=dem;
			sum=tmp;
		}else if(dem==ans){
			if(tmp>sum){
				cot=i;
				sum=tmp;
			}
		}
	}
	int c=cot;
	cout<<cot+1<<endl;
	for(int i=0;i<n;i++){
		if(s.count(a[i][c])==1){
			cout<<a[i][c]<<" ";
		}
	}
	return 0;
}
