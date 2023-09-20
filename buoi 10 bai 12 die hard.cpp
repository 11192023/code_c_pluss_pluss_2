#include<iostream>
using namespace std;
int check(int a[],int n)
{
	int c25=0,c50=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==25)c25++;
		else if(a[i]==50)
		{
			if(c25==0)return 0;
			--c25;
			++c50;
		}
		else{
			if(c25==0||c25*25+c50*50<75)return 0;
			if(c50!=0)
			{
				--c25;
				--c50;
			}
			else
			{
				c25=3;
			}
		}
	}
	return 1;
}
int main ()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(check(a,n))
		{
		cout<<"YES";
	    }
	else 
		{
		cout<<"NO";
		}
	return 0;
}
