#include<iostream>
#include<set>
using namespace std;
bool solve(){
	int n,k,t;;
	cin>>n>>k>>t;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int>s;
	for(int j=0;j<k;j++){
		auto it=s.lower_bound(a[j]-t);
		if(it!=s.end()&&(*it<=a[j]+t))
		return true;
		s.insert(a[j]);
	}
	for(int i=k;i<n;i++){
		s.erase(s.find(a[i-k]));
	    auto it=s.lower_bound(a[i]-t);
	    if(it!=s.end()&&(*it<=a[i]+t))
	    return true;
	    s.insert(a[i]);
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		if(solve()){
			cout<<"yes";
		}else{
			cout<<"no";
		}
	}
	return 0;
}
