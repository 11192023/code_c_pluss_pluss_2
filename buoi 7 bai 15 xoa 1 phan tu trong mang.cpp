#include<iostream>
using namespace std;
/*ham nhap mang*/
void nhap_mang(int  a[],int n)
{
	/*su dung vong lap de liet ke het tat ca cac phan tu */
	for(int i = 0;i<n;i++)
	{
	cin>>a[i];	
	}
}
/*ham xuat mang */
void xuat_mang (int a[],int n)
{
    /* su dung vong lap de liet ke het tat ca cac phan tu trong mang*/
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
		
}
/*ham xoa*/
/*so phan tu trong mang thay doi nen phai tham chieu n*/
void xoa(int a[],int &n,int vitrixoa)
{
	/*cho vong lap for de duyet tu vi tri xoa den cuoi*/
	for(int i = vitrixoa;i<n;i++)
	{
		a[i]=a[i+1];/*dich cac phan tu len 1 don vi */
	}
	n--;/*giam phan tu cua mang */
}
int main()
{
	int n,x,a[1000];
	cin>>n>>x;
	/*dua ham nhap mang vao chuong trinh*/
	nhap_mang(a,n);
	/*dung ham bool de kiem tra tung so dau tien khai bao bool bang false*/
	bool found = false;
	/*cho chay 1 vong  lap de kiem tra het tat ca cac phan tu de cua mang */
	for(int i =0;i<n;i++)
	/*dung if de kiem tra neu co so ma de bai yeu cau xoa la x thi dung ham xoa de xoa phan tu do*/
	{
		if(a[i]==x)
		{
			xoa(a,n,i);
			/*roi dua gia tri cho found ve true roi break ngay gia tri do*/
			found = true;
			break;
		}
	}
	/*bay gio minh xuat ket qua */
	if(found)
	{
		/*dua ham xuat mang vao chuong trinh*/
		xuat_mang(a,n);
	}
	else cout <<"NOT FOUND";
	return 0;
}
