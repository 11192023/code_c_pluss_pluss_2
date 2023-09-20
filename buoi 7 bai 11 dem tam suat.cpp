#include<iostream>
#include<climits>
/*dung de khai bao cac giai tri lon nhat*/
using namespace std;
int const MAX_VAL=10000000;/*cai nay phai luu y them 1 so khong de tranh tran du lieu neu de bai yeu cau 10 mu 6 thi minh khao bao 10 mu 7*/
int dem[MAX_VAL+1];
int main(){
	int n;
	cin>>n;
	/*cai nay la cap phat dong de chay mang theo y ma chuong trinh mong muon*/
	int*a=new int [n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		dem[a[i]]++;
	}
	/*cai nay dung de duyet qua tat ca cac thu tu  trong mang dem theo thu tu tang dan*/
	for(int i=0;i<=MAX_VAL;i++){
		if(dem[i]!=0){
			cout<<i<<" "<<dem[i]<<endl;
		}
	}
	cout<<endl;
	/*cai nay dung de duyet qua het tat ca cac gia tri trong mang theo thu tu cua mang */
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			cout<<a[i]<<" "<<dem[a[i]]<<endl;
			dem[a[i]]=0;/*cai nay de tranh su lap lai cai gia tri trong mang*/
		}
	}delete []a;/*dung de giai phong de tranh tran bo nho*/
	return 0;
}
