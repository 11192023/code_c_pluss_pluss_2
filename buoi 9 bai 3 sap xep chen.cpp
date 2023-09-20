#include <iostream>
using namespace std;
void xuat_mang (int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i];
		if(i!=n-1){
			cout<<" ";//dieu kien if de tranh sau phan tu cuoi co dau cach sai caai input ma de bai yeu cau
		}
	}cout<<endl;
}
void insert_sort(int a[],int n){
	for(int i=1;i<n;i++)//duyet tu 1 vi 0 thi sau no khong co gia tri nao het de chen
	{
		int chen =  a[i];
		int vitri = i-1;//vi tri o phia truoc cho co du lieu muon chen
		while(vitri>=0&&chen<a[vitri])//neu chen nho hon vi tri 
		{
			a[vitri+1]=a[vitri];//chuyen vi tri sang ben phai
			vitri--;
		}
		a[vitri+1]=chen ;//neu chen khong lon hon vi tri thi khong doi 
		cout<<"Buoc "<< i+1 <<": ";//cai nay no chi in tu buoc 2 thieu buoc 1
		xuat_mang(a,n);
	}
}
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Buoc 1: ";//in buoc 1 o day
	xuat_mang(a,n);
	insert_sort(a,n);

	return 0;
	
}
