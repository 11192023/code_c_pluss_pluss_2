#include<iostream>
using namespace std;
int x,y,d;
void extended(int a,int b){
	if(b==0){
		int x=1;
		int y=0;
		int d=a;
	}else
	{
		extended(b,a%b);
		int tmp=x;
		int x=y;
		int y=tmp-(a/b)*y;
	}
}
void inverse(int a,int m){
	extended(a,m);
	if(d!=1){
		cout<<"invalid!";
	}else{
		cout<<(x%m+m)%m<<endl;
	}
}
int bin_pow(int a,int b,int m){
	int res=1;
	int a%=m;
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
int a[100][100];
void init(){
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			if(i==j&&j==1){
				a[i][j]=1;
			}else{
				f[i][j]=f[i-1][j-1]+f[i-1][j];
				f[i][j]%=mod;
			}
		}
	}
}
int f[100];
void init()
{
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=100;i++){
		f[i]=f[i-1]+f[i-2];
		f[i]%=mod;
	}
}
void multiple (int a[2][2],int b[2][2]){
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
struct Node{
	int data;
	Node*next;
};
typedef struct Node*node;
node makenode(int x){
	node tmp =new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
int size(node a){
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
void insertfirst (node&a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
void insertlast(node&a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		node p=a;
		while(p!=NULL){
			p=p->next
		}
		p->next=tmp;
	}
}
void insertcentor(node&a,int x,int pos){
	int n=size(a);
	if(pos<=0||pos>n+1){
		cout<<"invalid!"<<endl;
		return 0;
	}
	if(pos==1){
		insertfirst(a,x);
	}
	if(pos==n+1){
		insertlast(a,x);
	}
	node tmp=makenode(x);
	node pre=NULL;
	node af =a;
	if(a==NULL){
		a=tmp;
	}
	for(int i=1;i<pos;i++){
		pre=af;
		af=af->next;
	}
	tmp->next=af->next;
	af->next=NULL;
	pre->next=tmp;
}
void deletefirst(node &a){
	if(a==NUll)return ;
	a=a->next;
}
void deletelast(node&a){
	node pre=NULL;
	node af=a;
	while(af->next!=null){
		pre=af;
		af=af->next;
	}
	pre->next=NULL;
}
void deletecentor(node&a,int pos){
   int n =size(a);
   if(pos<=0&&pos>n){
   	cout<<"invalid!";
   	return ;
   }
   if(pos==1){
   	deletefirst(a);
   }
   if(pos=n){
   	deletelast(a);
   }
   node pre=NULL;
   node af=pre;
   for(int i=1;i<pos;i++){
   	pre=af;
   	af=af->next;
   }
   pre->next=af->next;
}
void interchange_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=0;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
}
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
}
void insect_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(i>=0&&x<a[pos]){
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
	if(a>b)return a;
	return b;
}
int cnt[1000]={0};
void check(int a[],int n){
	int res=0;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		res=min(res,a[i]);
		ans=max(res,a[i]);
	}
	for(int i=res;i<=ans;i++){
		if(cnt[i]){
			for(int k=0;k<cnt[i];k++){
				cout<<i<<" ";
			}
		}
	}
}
void merge (int a[],int l,int r,int m){
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
	}
	while(j<y.size()){
		a[l]=y[j];
		l++;
		j++;
	}
}
void merge_sort(int a[],int l,int r){
	if(l>=r)return ;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,r,m);
}
void headify(int a[],int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
    if(left<n&&a[left]>a[largest]){
    	largest=left;
	}
	if(right<n&&a[right]>a[larges]){
		largest=right;
	}
	if(largest!=i){
		swap(a[largest,a[i])
		headify(a,n,largest);
	}
}
void head_sort(int a[],int n){
	for(int i=(n-1)/2;i<n;i++){
		headify(a,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
		headify(a,i,0);
	}
}
int partition(int a[],int l,int r){
	int p=a[r];
	int i=l-1;
	for(int j=0;j<r;j++){
		if(a[j]<p){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}
void quick_sort(int a[],int l,int r){
	if(l>=r)return 0;
	int p=patition(a,l,r);
	quick_sort(a,l,p-1);
	quick_sort(a,p+1,r);
}
int patition(int a[],int l,int r){
	int x=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++;
		}while(a[i]<x);
		do{
			j--;
		}while(a[j]>x);
		if(i<j){
			swap(a[i],a[j]);
		}else{
			return j;
		}
	}
}
void quick_sort(int a[],int l,int r){
	if(l>=r)return ;
	int p=patition(a,l,r);
	quick_sort(a,l,p);
	quick_sort(a,p+1,r);
}
int f[1000];
void init(){
	for(int i=0;i<=1000;i++){
		f[i]=1;
	}f[0]=0;
	f[1]=0;
	for(int i=2;i<=sqrt(1000);i++){
		if(f[i]){
			for(int j=i*i;j<=1000;j+=i){
				f[j]=0;
			}
		}
	}
}
void init(int l,int r){
	int a[r-l+1];
	for(int i=0;i<=r-l+1;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=sqrt(r);i++){
		if(a[i]){
			for(int j=max(i*i,(l*i-1)/i*(i));j<=r;j+=i){
				a[j-l]=0;
			}
		}
	}
	for(int i=max(2,l);i<=l;i++){
		if(a[i-l]){
			cout<<i<<" ";
		}
	}
}
int n,a[100],ok;
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void generate(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}
int n,a[100],k,ok;
void kt(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void generate(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]--;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int n,a[100],ok;
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void generate(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		int j=n;
		while(a[j]<a[i])j--;
		swap(a[i],a[j]);
		int l=i+1;
		int r=n;
		while(l<r){
			swap(a[l],a[r-l+1]);
			l++;r--;
		}
	}
}
int n,a[100],cnt,ok;
void kt(){
	cnt=1;
	a[1]=n;
}
void genarate(){
	int i=cnt;
	while(i>=1&&a[i]==1){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]--;
		int d=cnt-i+1;
		int cnt=i;
		int q=d/a[i];
		int p=d%a[i];
		if(q){
			for(int j=0;j<q;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}
		if(p){
			cnt++;
			a[cnt]=p;
		}
	}
}
void kt(){
	for
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int pre[n+1]={0};
	for(int i=1;i<=n;i++){
		pre[i]=a[i]+pre[i-1];
	}
	int l,r;
	cin>>l>>r;
	cout<<a[r]-a[l]<<endl;
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int pre[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
		}
	}
	int c1,c2,h1,h2;
	cin>>c1>>c2>>h1>>h2;
	cout<<pre[c2][h2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1]<<endl;
	
	f2[0]=1;
	for(int i=1;i<=1000;i++){
		f2[i]=i*f[i-1];
	}
	return 0;
}
