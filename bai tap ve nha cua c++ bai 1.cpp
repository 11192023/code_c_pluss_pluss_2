#include<iostream>
using namespace std;
void sum_product(int n,int &product,int &sum)
{
	product =1;
	sum =0;
	for(int i=1;i<n;i++)
	{
		product*=i;
		sum+=i;
	}
}
int main(){
	int n;
	cin>>n;
	int product;
	int sum;
	sum_product(n,product,sum);
	cout<<product;
	cout<<endl;
	cout<<sum;
	return 0;
}
