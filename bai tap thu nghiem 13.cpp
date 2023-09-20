#include<iostream>
#include<climits>
using namespace std;
/*mang nay dung de dem*/
int dem [1000001];

int main(){
	int n;
	cin>>n;
	/*dung cap phap dong de khao bao mang duoc thoai mai vi su dung cac nay no khong can phu thuoc vao chuong trinh cho no chi nhin vao chuong trinh va cho mang phu hop voi chuong trinh nhat*/
	int*a=new int[n];
	/*khai bao gia tri max va min trong mang*/
	cin>>a[0];
	int max_val=INT_MIN;
	int min_val=INT_MAX;
	/*vong lap dung de xuat ra gia tri a[i] va tan suat va  gia tri max va gia tri min*/ 
	for(int i =0;i<n;i++){
		cin>>a[i];
		dem[a[i]]++;
		max_val=max(max_val,a[i]);
	     min_val=min(min_val,a[i]);
}
/*vong lap nay la dung de duyet theo thu tu tang den trong mang dem*/
	for(int i=min_val;i<max_val;i++){
		if(dem[i]!=0){
			cout<<i<<" "<<dem[i]<<endl;
		}
	}
		cout<<endl;
		/*vong lap nay de duyet het tat ca cac so trong mang va in ra tan suat*/
		for(int i =0;i<n;i++){
			if(dem[a[i]]!=0){
				cout<<a[i]<<" "<<dem[a[i]];
				dem[a[i]]=0;
			}
		}
	delete []a;
	/*dung delete de giai phong de tranh tran bo nho*/
	return 0;
}
