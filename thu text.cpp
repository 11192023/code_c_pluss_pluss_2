#include<iostream>
#include<cmath>
using namespace std;
int n;
int check_1(int x ){
if(n<2)return 0;
	for(int i=2;i<=sqrt(x);i++)if(x%i==0)return 0;
	return 1;
	}
int check_2(int x){
	int sum =0;
	while(x!=0){
		sum+=x%10;
		x=x/10;
	}return sum;
}
int check_3(int x){
	int sum =0;
	while(x!=0){
		int digital=x%10;
		if(digital%2==0)sum+=digital;
		x=x/10;
	}return sum;
}
int check_4(int x){
	int sum=0;
	while(x!=0){
		int remainded =x%10;
		if(remainded==3||remainded==7||remainded%10==5||remainded%10==2){
			sum+=remainded;
			x=x/10;
		}
	}return sum;
}
int check_5(int x){
	int solatnguoc=0;
	while(x!=0){
		solatnguoc=solatnguoc*10;
		solatnguoc+=x%10;
		x=x/10;
	}return solatnguoc;
}
int check_6(int x){
	int cnt =0;
	for(int i=2;i<=n;i++)if(x%i==0&&check_1(i)==1)++cnt;
		
	return cnt;
}
int check_7(int x){
	int cnt=0;
	for(int i=1;i<=n;i++)if(x%i==0&&check_1(i)==1)cnt = max(cnt,i);
		
	return cnt;
}
int check_8(int x){
	while(x!=0){
		int du =x%10;
		if(du==6)return 1;
		
		x=x/10;
	}return 0;
}
int check_9(int x){
	int sum=0;
	while(x!=0){
		sum+=x%10;
		x=x/10;
		
	}if(sum%8==0) return 1;
	return 0;
		
}
int check_10(int x){
	int cnt =0;
	while(x!=0){
		int k=1;
		for(int i=1;i<=x%10;i++)k*=i;
		cnt+=k;
		x=x/10;
	}return cnt;
}
int check_11(int x){
	int k=x%10;
	while (x!=0){
		if(x%10!=k)return 0;
		x=x/10;
	}return 1;
}
int check_12(int x){
	int k=x%10;
	while(x!=0){
		if(x%10>k)return 0;
		x=x/10;
	}return 1;
}

int check_13(int x){
	int cnt =0;
	int m=x;
	while (m>0){
		cnt++;
		m=m/10;
	}
	int tong =0;
	int temp=x;
	while(temp>0){
		int chuso = temp%10;
		 tong += pow(chuso,cnt);
		temp=temp/10;
	}return tong;
}
int main(){
	
	cin>>n;
	cout<<check_1(n)<<endl;
	cout<<check_2(n)<<endl;
	cout<<check_3(n)<<endl;
	cout<<check_4(n)<<endl;
	cout<<check_5(n)<<endl;
	cout<<check_6(n)<<endl;
	cout<<check_7(n)<<endl;
	cout<<check_8(n)<<endl;
	cout<<check_9(n)<<endl;
	cout<<check_10(n)<<endl;
	cout<<check_11(n)<<endl;
	cout<<check_12(n)<<endl;
	cout<<check_13(n)<<endl;
	return 0;
}

