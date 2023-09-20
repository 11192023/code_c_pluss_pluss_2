#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	if(a>b)return a;
	return b;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int>st;
	int res=INT_MIN;
	int i=0;
	while(i<n){
		if(st.empty()||a[i]>=a[st.top()]){
			st.push(i);
			i++;
		}else{
			int idx=st.top();
			st.pop();
			if(st.empty()){
				res=max(res,i*a[idx]);
			}else{
				res=max(res,a[idx]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
		int idx=st.top();
			st.pop();
			if(st.empty()){
				res=max(res,i*a[idx]);
			}else{
				res=max(res,a[idx]*(i-st.top()-1));
			}
		}
	cout<<res<<endl;
	return 0;
}
