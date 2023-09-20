#include<iostream>
using namespace std;
struct sophuc {
	int Phanthuc;
	int Phanao;
	sophuc(int r,int v){
		Phanthuc=r;
		Phanao=v;
	}
	void insophuc(){
		cout<<Phanthuc<<"+"<<Phanao<<"i";
	}
};
int main(){
	sophuc s=sophuc(1,3);
	s.insophuc();
	return 0;
}