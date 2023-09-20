#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int x,y,d;
void extended(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}else{
		extended(b,a%b);
		int tmp=x;
		x=y;
		y=tmp-(a/b)*y;
	}
}
void inverse(int a,int m){
	extended(a,m);
	if(d!=1){
		cout<<"invalid!"<<endl;
	}else{
		cout<<(x%m+m)%m<<endl;
	}
}
int bin_pow(int a,int b,int x){
	int res=1;
	a%=m;
	while(b){
		if(b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
void inverse2(int a,int m){
	cout<<bin_pow(a,m-2,m)<<endl;
}
int f[100][100];
void init(){
	for(int i=0;i<=100;i++){
		for(int j=0;j<=i;j++){
			if(j==1||i==j){
				f[i][j]=1;
			}else{
				f[i][j]=f[i-1][j-1]+f[i-1][j]%mod;
			}
		}
	}
}
int f1[100];
void init1(){
	f1[0]=0;
	f1[1]=1;
	for(int i=2;i<=100;i++){
		f[i]=f[i-1]+f[i-2];
		f[i]%=mod;
	}
}
void multiple(int a[2][2],int b[2][2]){
	int res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=a[i][k]*b[k][j]%mod;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a[i][j]=res[i][j];
		}
	}
}
void bin(int n){
	int res[2][2]={{1,0},{0,1}};
	int a[2][2]={{1,1},{1,0}};
	while(n){
		if(n%2==1){
			multiple(res,a);
		}
		multiple(a,a);
		n/=2;
	}
	cout<<res[1][0]<<endl;
}
int f2[1000];
void interchange(int a[],int n){
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
}
void bubble_sort(int a[100],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void insertsort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
int min(int a,int b){
	if(a<b)return a;
	return b;
}
int max(int a,int b){
	if(a>b){
		return a;
	}return b;
}
int cnt[10000]={0};
void merge(int a[],int l,int r,int m){
	vector<int>x(a+l,a+m+1);
	vector<int>y(a+m+1,a+r+1);
	int i=0;
	int j=0;
	while(i<x.size()&&j<y.size()){
	     if(x[i]<y[j]){
	     	a[l]=x[i];
	     	l++;i++;
		 }else{
		 	a[l]=y[j];
		 	l++;j++;
		 }
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;i++;
	}while(j<y.size()){
		a[l]=y[j];
		l++;j++;
	}
}
void merge_sort(int a[],int l,int r){
	if(l>=r){
		return;
	}
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m,r);
	merge(a,l,r,m);
}
int f[10000];
void sang(){
	for(int i=0;i<=10000;i++){
		f[i]=1;
	}
	f[0]=0;f[1]=1;
	for(int i=2;i<=sqrt(10000);i++){
		if(f[i]){
			for(int j=i*i;j<=10000;j+=i){
				f[j]=0;
			}
		}
	}
}
void sang_1(int l,int r){
	int f[r-l+1];
	for(int i=0;i<=r-l+1;i++){
		f[i]=1;
	}
	f[0]=0;f[1]=0;
	for(int i=2;i<=sqrt(r);i++){
		for(int j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
			f[j-l]=0;
		}
	}
	for(int i=max(2,l);i<=r;i++){
		if(f[i-l]){
			cout<<i<<" ";
		}
	}
}
struct Node{
	int data;
	Node*next;
};
typedef struct Node*node;
node makenode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
int count(node a){
	int cnt=0;
	while(a!=NULL){
		cnt++;
		a=a->next;
	}
	return cnt;
}
bool empty(node a){
	return a==NULL;
}
void insertfirst (node &a, int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
void insertlast(node &a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void insertcenter (node &a,int pos,int x){
	int n=count(a);
	if(pos<=0||pos>n+1){
		cout<<"invalid!"<<endl;
		return ;
	}
	if(pos==1){
		insertfirst(a,x);
	}
	if(pos==n+1){
		insertlast(a,x);
	}
	node tmp=makenode(x);
	node pre=NULL;
	node af=a;
	for(int i=1;i<pos-1;i++){
		pre=af;
		af=af->next;
	}
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=af;
		pre->next=tmp;
	}
}
void deletefirst(node&a){
	if(a==NULL)return ;
	a=a->next;
}
void deletelast (node&a){
	node pre=NULL;
	node af=a;
	while(af->next!=NULL){
		pre=af;
		af=af->next;
	}
	pre->next=NULL;
}
void deletecenter(node &a,int pos){
	int n=count(a);
	if(pos<=0||pos>n+1){
		cout<<"invalid!";
	}
	if(pos==1){
		deletefirst(a);
	}
	if(pos==n){
		deletelast(a);
	}
	node pre=NULL;
	node af=a;
	for(int i=1;i<pos-1;i++){
		pre=af;
		af=af->next;
	}
	pre->next=af->next;
	af->next=NULL;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int pre[1000]={0};
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i];
	}
	int l;int r;
	cin>>l>>r;
	cout<<pre[r]-pre[l-1]<<endl;
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int pre[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i];
		}
	}
	int h1,h2,c1,c2;
	cout<<pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[hi-1][c1-1];
	f2[0]=1;
	for(int i=1;i<=1000;i++){
		f2[i]=i*f[i-1];
	}
	int n;
	cin>>n;
	int a[100];
	int b=0;
	int c=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		b=min(b,a[i]);
		c=max(c,a[i]);
	}
	for(int i=b,i<=c;i++){
		if(cnt[i]){
			for(int k=0;k<cnt[i];k++){
				cout<<i<<" ";
			}
		}
	}
}
