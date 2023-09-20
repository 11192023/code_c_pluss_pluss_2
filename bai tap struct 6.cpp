#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	char ma[100];
	char ten[100];
	float diem;
};
typedef struct sinhvien SV;
void nhap(SV*a){
	scanf("%s",a->ma);
	getchar();
	fgets(a->ten,100,stdin);
	scanf("%.2f",&a->diem);
}
void in(SV a){
	printf("%s %s %.2lf\n",a.ma,a.ten,a.diem);
}
void timkiem(SV a[],int n,char x[100]){
	for(int i=0;i<n;i++){
		if(strcmp(x,a[i].ma)==0){
			in(a[i]);return;
		}
	}
	printf("khong tim thay sinh vien");
}
void timkiem2(SV a[],int n){
	int res =0;int pos;
	for(int i=0;i<n;i++){
		if(a[i].diem>res){
			res=a[i].diem;
			pos=i;
		}
	}
	in(a[pos]);
}
void sx(SV a[],int n){
	for(int i=0;i<n;i++){
		int max =i;
		for(int j=i+1;j<n;j++){
			if(a[j].diem>a[max].diem){
				max=j;
			}
		}
         SV temp =a[i];
         a[i]=a[max];
         a[max]=temp;
	}
}
int cmp(const void *a,const void *b){
	SV*x =(SV*)a;
	SV*y =(SV*)b;
	if(x->diem<y->diem)return 1;
	return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	SV a[n];
	for(int i=0;i<n;i++)nhap(&a[i]);
	for(int i=0;i<n;i++)in(a[i]);
	printf("nhap ma so sinh vien can tim");
	char s[100];
	scanf("%s",s);
	timkiem(a,n,s);
	//timkiem2(a,n);
	//sx(a,n);
	//for(int i=0;i<n;i++)in(a[i]);
	//qsort(a,n,sizeof(SV),cmp);
	return 0;
}
