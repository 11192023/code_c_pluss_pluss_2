#include<iostream>
using namespace std;

int* nhap(int* p, int& n) {
    cin >> n;
    p = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    return p;
}

void xuat(int* p, int n) {
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}
void max_value(int *p,int n,int &max){
	max=p[0];
	for(int i=1;i<n;i++){
		if(p[i]>max){
			max=p[i];
		}
	}
}

int main() {
    int* p;
    int n;
    int max;
    p = nhap(p, n);
    xuat(p, n);
    max_value(p,n,max);
    cout<<max<<endl;
    delete[] p;
    return 0;
}
