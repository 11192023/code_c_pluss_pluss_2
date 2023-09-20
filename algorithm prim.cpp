#include<bits/stdc++.h>
using namespace std;
//create a stuct edge
struct edge{
	int x,y,w;
};
int n,m;
vector<pair<int,int>>v[1001];
bool visit[1001];
//this is function to input set edge 
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		//x is ver the first 
		//y is ver the second
		//w is the number weight
		v[x].push_back({y,w});
		v[y].push_back({x,w});
	}
	//for the all these ver in set v is false
	//forl the all these ver in set v mst(minimum spanning tree) is true
	memset(visit,false,sizeof(visit));
}
//this is function of the algorithm prim
//u is ver from set v
void prim(int u){
	//step 1 intialize
	//create a vector store set edge name is mst
	vector<edge>mst;
	//d is the distance of the mst is smallest 
	int d=0;
	//for ver u into set of v mst
	visit[u]=true;
	//step 2 loop
	while(mst.size()<n-1){
		int X;
		int Y;
		int res=INT_MAX;
		for(int i=1;i<=n;i++){
			if(visit[i]){
				for(auto it:v[i]){
					int j=it.first; int weight=it.second;
					if(!visit[j]&&weight<res){
						X=j;Y=i;res=weight;
					}
				}
			}
		}
		mst.push_back({X,Y,res});
		d+=res;
		visit[X]=true;
	}
	cout<<d<<endl;
	for(auto x: mst){
		cout<<x.x<<" "<<x.y<<" "<<x.w<<endl;
	}
}
int main(){
	input();
	prim(1);
	return 0;
}
