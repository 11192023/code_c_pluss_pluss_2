#include<bits/stdc++.h>
using namespace std;
int  main(){
	int n;
	cin>>n;
	int a[100];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int>st;
	int i=0;
	while(i<n){
		if(st.empty()){
			st.push(i);
		}else{
			while(!st.empty()&&a[st.top()]<a[i]){
				b[st.top()]=a[i];
				st.pop();
			}
			st.push(i);
		}
		i++;
	}
	while(!st.empty()){
		b[st.top()]=-1;
		st.pop();
	}
	for(auto x: b){
		cout<<x<<" ";
	}
	return 0;
}
