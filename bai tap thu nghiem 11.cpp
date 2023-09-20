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
/* ham de chen them 1 ki tu vao vi tri bat ki trog mang*/
/* minh phai truyen tham chieu cho n vì gia tri cua n thay doi*/
/* x la gia tri chen va index la vi tri ma minh truyen gia tri x vao*/
void chen(int a[],int &n,int x,int index)
{
	/*bay gio minh kiem tra vi tri index chen vao co hop le khong*/
	if(index<1||index>n+1)/*minh kiem tra vi tri tu 1 den n+1 neu khong nam trong khoang thi vi tri chen khong hop le*/
	{
		cout<<"vi tri chen khong hop le";
		return ;
	}
	/*tiep theo minh dung vong la de kiem tra tu so cuoi den vi tri can chen*/
	for(int i =n;i>=index;i--)
	{
		a[i]=a[i-1];/*cai nay co tac dung la dich cac phan tu sang ben trai tu vi tri minh chen sang 1 don vi de cho gia tri vao vi tri */
	}a[index-1]=x;
	/*buoc chen phan tu vao vi tri ma d bai yeu cau*/
	/*index -1 vi de bai yeu cau mang xuat phat tu 1 ma may tinh chi hieu mang bat dau bang so 0 nen mih phai tru 1*/
	n++;/*tang gia tri n vi minh them do nen phai tang mang len moi du cho cho tat ca phan tu nhu yeu cau de bai*/
}
int main() 
{
  int n, x,index,a[1000];
  cout<<"nhap cac phan tu de bai cho/n"	;
  cin>>n>>x>>index;
  cout<<"dua ham nhap mang/n";
  nhap_mang(a,n);
  /*dua ham chen vao de kiem tra*/
  chen(a,n,x,index);
  cout<<"xuat manng /n";
  xuat_mang(a,n);
  return 0;
}
