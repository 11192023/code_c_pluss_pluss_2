#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	long long countcup = a+b+c;
	long long countmedal =d+e+f;
	long long maxcup =min(g,5);
	long long maxmedal =min(g-maxcup,10);
	if(countcup<=maxcup&&countmedal<=maxmedal){
		cout <<"YES\n";
	}cout <<"NO\n";
	return 0;

	
}
