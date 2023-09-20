#include<bits/stdc++.h>
using namespace std;
struct edge{
	int u,v;
	int w;
};
int n,m;
int const mod= 1001;
int parent[mod];
int size[mod];
vector<edge>c;

void make_set(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		size[i]=1;
	}
}
int find(int u){
	if(u==parent[u]){
		return u;
	}
	return parent[u]=find(parent[u]);
}
bool uni(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b){
		return false;
	}else {
		if(size[a]<size[b])swap(a,b);
		parent[b]=a;
		size[a]+=size[b];
		return true;
	}
}
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		edge e;
		e.u=x;e.v=y;e.w=w;
		c.push_back(e);
	}
}
bool cmp(edge a,edge b){
	return a.w<b.w;
}
void kruskaln(){
	edge b;
	b.u=0;b.v=0;b.w=0;
	c.push_back(b);
	vector<edge>msi;
	int d=0;
	sort(c.begin(),c.end(),cmp);
	for(int i=1;i<=m;i++){
		if(msi.size()==n-1)break;
		edge e=c[i];
		if(uni(e.u,e.v)){
			msi.push_back(e);
			d+=e.w;
		}
	}
	if(msi.size()!=n-1){
		cout<<"do thi nay khong lien thong";
	}else{
		for(auto x:msi){
			cout<<x.u<<" "<<x.v<<" "<<x.w<<endl;
		}
		cout<<d<<endl;
	}
}
int main(){
	input();
	make_set();
	kruskaln();
	return 0;
}
