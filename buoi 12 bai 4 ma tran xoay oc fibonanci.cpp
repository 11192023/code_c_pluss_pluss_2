#include<iostream>
using namespace std;
long long fibo[100];
void igit(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<90;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	igit();
	long long n;
	cin>>n;
	long long**a=new long long*[n];
	for(int i=0;i<n;i++){
		a[i]=new long long[n]; 
	}
	int h1=0,h2=n-1,c1=0,c2=n-1;
	int cnt=0;
	while(h1<=h2&&c1<=c2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=fibo[cnt];
			cnt++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=fibo[cnt];
			cnt++;
		}
		c2--;
		if(h1<=h2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=fibo[cnt];
				cnt++;
			}
			h2--;
		}
		if(c1<=c2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=fibo[cnt];
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
