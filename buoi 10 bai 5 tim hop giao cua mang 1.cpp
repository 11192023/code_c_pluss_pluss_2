#include<iostream>
#include<climits>
using namespace std;
int MAX (int a,int b)
{
return	a>b?a:b;
}
int MIN (int a,int b)
{
return a<b?a:b;
}
int cnt[10000001];
int main ()
{
	int n,m;
	cin>>n>>m;
	int*a=new int[n];
	int*b=new int [m];
	int max =INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cnt[a[i]]=-1;
		min=MIN(min,a[i]);
		max=MAX(max,a[i]);
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		if(cnt[b[i]]==-1)
		{
		cnt[b[i]]=2;
		}
		else
		{
		cnt[b[i]]=1;
		}
		min=MIN(min,b[i]);
		max=MAX(max,b[i]);
	}
	for(int i=min;i<=max;i++){
		if(cnt[i]==2)
		{
		cout<<i<<" ";
		}
	}
	cout<<endl;
	for(int i=min;i<=max;i++)
	{
		if(cnt[i]!=0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
