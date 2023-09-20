#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n] ;int b[m];
	//nhap cho hai mang cua phan tu 
	for(int i=0;i<n;i++)cin>>a[i];
	for(int j =0;j<m;j++)cin>>b[j];
	//khai bao i va j 1 lan nua vi no chua duoc khai bao vi cai kia chi su dung trong vong lap 
	//khoi tao cho bien dau tien cua mang tron ca hai mang 
	//khai bao cho mang tron cua hai mang 
	int i=0,j=0,cnt=0,c[n+m];
	
	//vong lap while ddung de duyet hai het nhung phan tu cua mang 
	//luu y neu 1 trong hai mang khong thoa dieu kien thi lap tuc dung vong lap luon
	while(i<n&&j<m){
		//tiap theo la kiem tra dieu kien o day ta luon uu tien cho mang a 
		if(a[i]<=b[j]){
			//luu y la ta thuc hien gia tri cua cnt ban dau truoc de thuc hien phep tinh
			//sau do moi cong cong cnt cho lan kiem tra lan sau
			//roi dich phan tu cau mang a sang 1 don vi
			c[cnt++]=a[i];
			++i;
		}else {
			//neu dieu kien kia khong thoa thi chung to phan tu ngay mang b co gia tri nho hon
			//va gan ngay vao mang tron 
			//roi dich mang b sang 1 so
			c[cnt++]=b[j];
			++j;
		}
	}
	//o day la ta kiem tra kiem tra cac phan tu vuot qua diem chung ve do dai cua hai mang
	//vi du nhu do dai mang a la 4
	
	//nhung do dai mang b la 9 thi
	//chung to nhu dieu kien o tren neu 1 trong hai mang duyet het thi se dung vong lap
	//suy ra phan tu o mang b van con 5 gia tri chua duoc duyet qua
	//nen o day ta dung vong lap while de kiem tra nhugn phan tu do
	//kiem tra tung dieu kien roi sap xep vao mang tron 
	while(i<n){
		c[cnt++]=a[i++];
	}
	while(j<m){
		c[cnt++]=b[j++];
	}
	//o day ta xuat ra nhung phan tu trong mang tron 
	//duyet tu 0 den n+m
	for(int i=0;i<n+m;i++){
		//chu y dung de bi nham giua mang c voi mang a 
		cout<<c[i]<<" ";
	}
	return 0;
	
	
}
