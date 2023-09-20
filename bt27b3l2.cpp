#include <iostream>
using namespace std;
int main (){
	long long a, b,c,d,e,f,g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	if(a+b+c<=5*g&&d+e+f<=10*g){
		if (a>0&&d>0||b>0&&e>0||c>0&&f>0){
			cout<<"NO\n";
		}else {cout<<"YES\n";
		}
	}else{
	cout<<"NO\n";
}
	return 0;
}
