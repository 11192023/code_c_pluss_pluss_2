#include<iostream>
#include<vector>
using namespace std;
int n,k,a[100],ok;
void indicate(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void gen(){
	int i=n;
    while(i>=1&&a[i]==1){
    	a[i]=0;;
    	i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]=1;
	}
}
bool check(){
	int cnt=0;
	int res=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			cnt++;
		}else{
			cnt=0;
		}
		if(cnt>k){
			return false;
		}else if(cnt==k){
			res++;
		}
	}
	return res==1;
}
int main(){
	vector<string>v;
	string res="";
	cin>>n>>k;
	ok=1;
	indicate();
	while(ok){
		if(check()){
			for(int i=1;i<=n;i++){
				if(a[i]){
					res+="B";
				}else{
				res+="A";	
				}
			}
			v.push_back(res);
			res="";
		}
		gen();
	}
	cout<<v.size();
	cout<<endl;
	for(auto x:v){
		cout<<x<<endl;
	}
	return 0;
}
