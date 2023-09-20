#include<iostream>
using namespace std;
int x,y,d;
void extended(int a,int b)
{
	if(b==0){
		int x=1;
		int y=0;
		int d=a;
	}else
	{
		extended(b,a%b)
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
int a[1000][1000];
void init(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==1||i==j){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
}
int b[1000];
void init2(){
	b[0]=0;
	b[1]=1;
	for(int i=2;i<=1000;i++){
		b[i]=b[i-1]+b[i-2];
	}
}
void multiple(int a[2][2],int b[2][2]){
	int res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=res[i][k]*res[k][j];
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
int c[1000];
void interchanges_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		min=i;
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
void insert_sort(int a[],int n){
	for(int i=1;i<n-1;i++){
		int x=a[i];
		int pos=i-1;
		if(pos>=0&&x<a[pos]){
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
void count_sort(int a[],int n){
	int ans=0;
	int res=0;
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
		ans=min(ans,a[i]);
		res=max(res,a[i]);
	}
	for(int i=ans;i<=res;i++){
		if(cnt[i]){
			for(int k=0;k<cnt[i];k++){
				cout<<i<<" ";
			}
		}
	}
}
void headify(int a[],int n,int i){
     int largest =i;
     int left=2*i+1;
     int right=2*i+2;
     if(left<n&&a[left]>a[largest]){
     	largest=left;
	 }
	 if(right<n&&a[right]>a[largest]){
	 	largest=right;
	 }
	 if(largest!=i){
	 	swap(a[largest],a[i]);
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
void partition(int a[],int l,int r){
	int p=a[r];
	int j=l-1;
	for(int i=0;i<r;i++){
		if(p>a[i]){
			j++;
			swap(a[i],a[j]);
		}
	}
	j++;
	swap(a[j],a[r]);
	return j;
}
void quick_sort(int a[],int l,int r){
     if(l>=r)return;
     int p=partition(a,l,r);
     quick_sort(a,l,p-1);
     quick_sort(a,p+1,r);
}
void partition(int a[],int l,int r){
	int p=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++
		}while(a[i]<p);
		do{
			j--;
		}while(a[j]>p);
		if(i<j){
			swap(a[i],a[j]);
		}else{
			return j;
		}
	}
}
void quick_sort(int a[],int l,int r){
	if(l>=r)return ;
	int p=partition(a,l,r);
	quick_sort(a,l,p);
	quick_sort(a,p+1,r);
}
struct Node{
   int data;
   Node*next;	
};
typedef struct Node*node;
node makdenode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
int size(node a){
	int count =0;
	while(a!=NULL){
		count++;
		a=a->node;
	}
	return count;
}
bool empty(node a)
{
	return a==NULL;
}
void insert_first (node& a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
void insert_last(node &a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void insert_centor(node &a,int x,int pos){
	int n=size(a);
	if(pos<=0||pos>n+1){
		cout<"invalid!"<<endl;
		return;
	}
	if(pos==1){
		insert_first(a,x);
	}
	if(pos==n+1){
		insert_last(a,x);
	}
    node tmp=makenode(x);
    node pre=NULL;
    node af=a;
    for(int i=1;i<pos;i++){
    	pre=af;
    	pre=pre->next;
	}
	tmp->next=af;
	pre->next=tmp;
}
void delete_first(node &a){
	if(a==NULL)return;
	a=a->next;
}
void delete_last(node &a){
	node pre=NULL;
	node af=a;
	while(af->next!=NULL){
		af=af->next;
	}
	af->next=NULL;
}
void delete_center(node&a,int pos){
	int n=size(a);
	if(pos<=0||pos>n){
		cout<<"invalid!";
		return ;
	}
	if(pos==1){
		delete_first(a);
	}
	if(pos==n){
		delete_last(a);
	}
	node pre=NULL;
	node af=a;
	for(int i=1;i<pos;i++){
		pre=af;
		af=af->next;
	}
	pre->next=af->next;
	af->next=NULL;
}
int n,a[100],ok;
void kt(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
}
void regenerate(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]=1;
	}
}
int n,k,a[100],ok;
void kt(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void regenerate(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	else{
		a[i]--;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int pre[n+1];
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i];
	}
	int l,r;
	cin>>l>>r;
	cout<<pre[r]-pre[l]<<endl;
	int a,b;
	cin>>a>>b;
	int b[1000][1000];
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cin>>a[i][j];
		}
	}
	int pre[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(Int j=1;j<=m;j++){
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
		}
	}
	int c1,c2,h1,h2;
	cin>>c1>>c2>>h1>>h2;
	cout<<pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1]<<endl;
	c[0]=1;
	for(int i=1;i<=1000;i++){
		f[i]=i*f[i-1];
	}
}
