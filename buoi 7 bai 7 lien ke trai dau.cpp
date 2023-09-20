#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];	
	}

/*khai bao mot bien h de kiem tra cac phan tu chi dduoc in ra mot lan tranh lap ai phan tu */
/*khai bao bien h bang -1 de tranh  nham lan voi mang vi -1 duoc coi la 1 gia tri loi  */
     int h =-1;
/* su dung mot vong lap for de duyet qua cac phan  tu trong mang tu dau den cuoi */
/*duyet tu i den n-1 boi vi tranh kiem tra gia tri rac khi  duyet den phan tu cuoi cung*/
/* vi du nhu 2 la phan tu cuoi cung thi sau 2 khong con gia tri gi het nen no se lay 1 gia tri rac de dua vao sau 2 dan den su sai lech ve ket qua */
    for(int i=0;i<n-1;i++)
{
/*tiep theo la cau lenh if de kiem tra dieu kien cua caca cap so lien tiep trai dau nhau*/
/*trong do it nhat phai co dieu kien kiem tra bang  khong neu khong se dan den truong hop kiem tra chua dung */
/*minh cho a[i] bang khong cung duoc ma cho a[i+1] bang khong cung duoc nhung luu y chi nen di ve 1 huong cho cai nao thi cho cai do luon*/
/*phai co 1 dieu kien am va 1 dieu kien duong de phu hop voi yeu cau de bai */
    if((a[i]<=0&&a[i+1]>0)||(a[i]>=0&&a[i+1]<0))
    {
/*neu h == i thi chi in ra truong hop i+1 vi de tranh su lap lai */
/*phai tang gia tri h len i+1 de kiem tra phan tu tiep theo h voi i no phai co chi so song song voi nhau de kiem tra de tranh lap lai gia tri cu*/
/*cu xong 1 dieu kien thi tang bien h len i+1 de chay song song voi chi so cua mang */
	if(h==i)
	{
		cout<<a[i+1]<<" ";
		h=i+1;
	
	}else
	{
		cout<<a[i]<<" "<<a[i+1]<<" ";
		h= i+1;
	}
    }
		
}return 0;
}

