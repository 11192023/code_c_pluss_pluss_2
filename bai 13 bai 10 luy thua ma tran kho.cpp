#include<iostream>
#include<vector>
#include<climits>
using namespace std;
const long long mod =1000000000+7;
vector<vector<long long>> nhan_hai_ma_tran(vector<vector<long long>> a,vector<vector<long long>> b){
	int m=a.size();
	vector<vector<long long>> c(m,std::vector<long long>(m));
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]+=(a[i][k]%mod)*(b[k][j]%mod);
				c[i][j]%=mod;
			}
		}
	}
	return c;
}
vector<vector<long long>> power(vector<vector<long long>> a,int b){
	if(b==1)return a;
	vector<vector<long long>> tmp =power(a,b/2);
	if(b%2==1)return nhan_hai_ma_tran(nhan_hai_ma_tran(tmp,tmp),a);
	return nhan_hai_ma_tran(tmp,tmp);
}
int main(){
	long long n,m;
	cin>>n>>m;
	vector<vector<long long >> v;
	for(int i=0;i<n;i++){
		vector<long long> tmp;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			tmp.push_back(x);
		}
		v.push_back(tmp);
	}
		auto result=power(v,m);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
