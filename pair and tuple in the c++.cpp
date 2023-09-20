#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//pair<datatype1,datetype2> v;
//tuple<datatype1,datetype2,datatype3>t;
//get<index>(name_object);
int main(){
	pair<int,pair<int,int>>v={100,{200,300}};
	cout<<v.first<<endl;
	cout<<v.second.first<<" "<<v.second.second<<endl;
	tuple<int,int,int>t{1,2,3};
	cout<<get<0>(t);
	cout<<endl;
	tuple<string ,int ,string>c=make_tuple("hung",12,"do");
	cout<<get<0>(c)<<endl;
	cout<<get<1>(c)<<endl;
	cout<<get<2>(c)<<endl;
	return 0;
}
