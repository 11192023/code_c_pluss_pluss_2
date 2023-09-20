#include<iostream>
#include<cmath>
using namespace std;
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void interchange_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void insert_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int maxi(int a,int b){
	if(a>b)return a;
	return b;
}
void count_sort(int a[],int n){
	const int max=100;
	int cnt[max]={0};
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
		m=maxi(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				cout<<i<<" ";
			}
		}
	}
}
bool find_linear(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return true;
		}
	}
	return false;
}
bool find_binery(int a[],int n,int x){
	int l=0;
	int r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return true;
		}else if(a[m]>x){
			r=m-1;
		}else{
			l=m+1;
		}
	}
	return false;
}
bool find_binery(int a[],int l,int r,int x){
	if(l>r){
		return false;
	}
	int m=(l+r)/2;
	if(a[m]==x){
		return true;
	}else if(a[m]>x){
	    return find_binery(a,l,m-1,x);
	}else{
		return find_binery(a,m+1,r,x);
	}
}
int b[1000];
void sieve(){
	for(int i=0;i<=1000;i++){
		b[i]=1;
	}
	b[0]=b[1]=0;
	for(int i=2;i<=sqrt(1000);i++){
		if(b[i]){
			for(int j=i*i;j<1000;j+=i){
				b[j]=0;
			}
		}
	}
}
int isprime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int fibonanci(long long  n){
	if(n==1||n==0){
		return 1;
	}
	long long fn2=0;
	long long fn1=1;
	for(int i=3;i<=93;i++){
		long long fn=fn1+fn2;
		if(fn==n){
			return 1;
		} 
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
int persfect(int n){
	int sum=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			sum+=i;
			if(i*i!=n){
				sum+=n/i;
			}
		}
	}
	return sum==n;
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[100];
	int b[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0;
	int j=0;
	int cnt=0;
	int c[n+m];
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			c[cnt++]=a[i];
			++i;
		}else{
			c[cnt++]=b[j];
			++j;
		}
	}
	while(i<n){
		c[cnt++]=a[i++];
	}
	while(j<m){
		c[cnt++]=b[j++];
	}
	for(int i=0;i<n+m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
