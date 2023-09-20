#include<bits/stdc++.h>
using namespace std;
vector<long long>s;
long long ans[101];
void init(){
	queue<string>q;
	q.push("9");
	s.push_back(9);
	while(1){
		string top=q.front();
		q.pop();
		if(top.length()==11)break;
		s.push_back(stoll(top+"0"));
		s.push_back(stoll(top+"9"));
		q.push(top+"0");
		q.push(top+"9");
	}
	for(int i=1;i<=100;i++){
		for(auto x:s){
			if(x%i==0){
				ans[i]=x;
				break;
			}
		}
	}
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n<<" "<<ans[n]<<endl;
	}
	return 0;
}
