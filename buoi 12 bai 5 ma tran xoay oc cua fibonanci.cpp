#include<iostream>
#include<cmath>
using namespace std;
bool nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}
int p[100000];
void igit(){
	int i=0;int cnt=0;
	while(cnt<100000){
		if(nt(i)){
			p[cnt]=i;
			cnt++;
		}
		i++;
	}
}
int main(){
	igit();
	int n;
    cin>>n;
	int**a=new int*[n];
	for(int i=0;i<n;i++){
		a[i]= new int [n];
	}
	int cnt=0;
	int h1 =0,h2=n-1,c1=0,c2=n-1;
	while(h1<=h2&&c1<=c2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=p[cnt];
			cnt++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=p[cnt];
			cnt++;
		}
		c2--;
		if(h1<=h2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=p[cnt];
				cnt++;
			}
			h2--;
		}
		if(c1<=c2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=p[cnt];
				cnt++;
			}
			c1++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		delete[]a[i];
	}
	delete[]a;
	return 0;
}
