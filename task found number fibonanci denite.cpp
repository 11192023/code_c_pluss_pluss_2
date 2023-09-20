#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
//push_back
//size
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	cout<<v.size()<<endl;
	v.push_back(4);
	cout<<v.size()<<endl;
	cout<<"phan tu dau tien trong vector: "<<v[0]<<endl;
	cout<<"phan tu cuoi cung tring vector: "<<v[v.size()-1];
	cout<<"pahn tu cuoi cung trong vector: "<<v.back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(int x:v){
		cout<<x<< " ";
	}
	  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
	  	cout<<*it<<endl;
	  }
	  for(auto it=v.begin();it!=v.end();it++){
	  	cout<<*it<<endl;
	  }  
	  cout<<*(v.begin()+2);
	  int n;
	  cin>>n;
	 /* vector<int> s(n);
	  for(int i=0;i<n;i++){
	  	cin>>v[i];
	  }
	  for(int i=0;i<n;i++){
	  	cout<<v[i]<<" ";
	  }
	  cout<<endl;*/
	  vector<int> c;
	  for(int i=0;i<n;i++){
	  	int x;
	  	cin>>x;
	  	c.push_back(x);
	  }
	  for(int i=0;i<n;i++){
	  	cout<<c[i]<<" ";
	  }
	  vector<int> b(n,100);
	  for(int i=0;i<n;i++){
	  	cout<<b[i]<<endl;
	  }
	  b.push_back(20);
	  for(int x:b){
	  	cout<<x<<" ";
	  }
	  cout<<b.size()<<endl;
	  vector<string> m;
	  m.push_back("hung do");
	  m.push_back("han");
	  cout<<m.size()<<endl;
	  cout<<m[1][1]<<endl;
	  string s;
	  cin.ignore();
	  getline(cin,s);
	  stringstream ss(s);
	  string token;
	  vector<string> k;
	  while(ss>>token){
	  	k.push_back(token);
	  }
	  for(int i=0;i<k.size();i++){
	  	cout<<k[i]<<" ";
	  }
		return 0;
	
}
