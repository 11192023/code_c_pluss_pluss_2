#include<bits/stdc++.h>
using namespace std
struct sv{
	string ma , ten ,lop ,ns;
	double gpa;
	void in(){
		cout<<"ma sinh vien"<<ma<<endl;
		cout<<"ten sinh vien"<<ten<<endl;
		cout<<"lop"<<lop<<endl;
		cout<<"ngay sinh"<<ns<<endl;
		cout<<"gpa"<<fixed<<setprecision<<gpa<<endl;
	}
	void nhap(){
		cout<<"ma sinh vien ";cin>>ma;
		cout<<"ten sinh vien";
		cin.ignore();
		getline(cin,ten);
		cout<<"lop";cin>>lop;
		cout<<"ngay sinh";cin>>ns;
		cout<<"gpa";cin>>gpa;
	}
};
void inds(sv a[],int n){
	cout<<"thong tin danh sach sinh vien\n";
	for(int i=0;i<n;i++){
		a[i].in();
	}
}

void tkma(sv a[],int n){
	string ma;
	cout<<"nhap ma ma ban muon tim";cin>>ma;
	for(int i=0;i<n;i++){
		if(ma==a[i].ma){
			a[i].in();return ;
		}
	}
	cout<<"khong tim thay ma sinh vien ma ban muon tim\n";
}
void tkma2(sv a[],int n){
	string ma;
	cout<<"nhap ma ma ban muon tim\n";cin>>ma;
	bool found =false;
	for(int i=0;i<n;i++){
		if(a[i].ma.find(ma)!=string::npos){
			a[i].in();
			found=true;
		}
	}
	if(!found){
		cout<<"khong tim thay ma sinh vien ma ban muon tim\n";
	}
}
void dsgpa(sv a[],int n){
	double res =0;
	for(int i=0;i<n;i++){
		if(a[i].gpa>res)res=a[i].gpa;
	}
	cout<<"danh sach sinh vien co diem gpa cao nhat\n";
	for(int i=0;i<n;i++){
		if(res==a[i].gpa){
			a[i].in();
		}
	}
}
bool cmp1(sv a,sv b){
	return a.gpa>b.gpa;
}
void dsgpa(sv a[],int n){
	vector<sv> v;
	for(int i=0;i<n;i++){
		if(a[i].gpa>=2.5){
			v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end(),cmp1);
	cout<<"danh sach sinh vien co diem gpa >= 2.5 theo thu tu giam dan\n";
	for(sv x:v){
		x.in();
	}
}

