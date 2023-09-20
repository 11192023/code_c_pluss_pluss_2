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
		
	}
}
int main(){
	int a[10000];
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	
	
	
	insert_sort(a,n);
	xuat_mang(a,n);

	return 0;
	
}
