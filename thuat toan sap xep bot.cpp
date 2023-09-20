#include<iostream>
using namespace std;
void xuat_mang (int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i];
		if(i!=n-1){
			cout<<" ";//dieu kien if de tranh sau phan tu cuoi co dau cach sai caai input ma de bai yeu cau
		}
	}cout<<endl;
}
void bulde_sort(int a[],int n){
//vong lap thu nhat la  de duyet qua cac phan tu trong mang tru phan tu cuoi cung,vi sau phan tu cuoi cung khong con gia tri nao de sap xep

 
for(int  i =0;i<n-1;i++){
	//trong vong lap tiep theo ta duyet phan tu tiep theo cua phan tu trong mang dau tien 
	//ta duyet tu vi tri do den vi tri truoc vi tri da duoc sap xep dung roi 
	//vong lap tu 2 trong lan dau tien lap se dua ra gia tri lon nhat ta lap tu i+1 den n-1
	//trong lan lap thu 2 cua vong lap thu 2 ta duyet tu i+1 den n-i-1
	
	for(int j =0;j<n-i-1;j++){
		//khuc nay de kiem tra neu gia tri tay trai lon hon gia tri phia truoc tay phai thi lap tuc hoan doi truc tiep
		if(a[j]>a[j+1]){
			int temp= a[j+1];
			a[j+1]=a[j];
			
			a[j]=temp;
			
		}
		
	}
		cout<<"Buoc "<< i+1 <<": ";//cai nay no chi in tu buoc 2 thieu buoc 1
		xuat_mang(a,n);
}
}
int main (){
	int a[1000];
	int  n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bulde_sort(a,n);

	return 0;
}

