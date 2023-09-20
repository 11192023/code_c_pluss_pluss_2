#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct show{
	int start,end;
};
bool cmp(const show &a,const show &b){
	return a.end<b.end;
}
int main(){
	int n;
	cin>>n;
	vector<show> shows(n);
	for(int i=0;i<n;i++){
		cin>>shows[i].start>>shows[i].end;
	}
	sort(shows.begin(),shows.end(),cmp);
	int count =1;
	int lastend = shows[0].end;
	for(int i=1;i<n;i++){
		if(shows[i].start>lastend){
			count++;
			lastend=shows[i].end;
		}
	}
	cout<<count<<endl;
	return 0;
}
