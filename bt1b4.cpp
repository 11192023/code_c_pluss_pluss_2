#include<bits/stdc++.h>
using namespace std;

int check_1(int n ){
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
	}
int check_2(int n){
	int sum =0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}return sum;
}
int check_3(int n){
	int sum =0;
	while(n!=0){
		if(n%2==0)sum+=n%10;
		n/=10;
	}return sum;
}
int check_4(int n){
	int sum=0;
	while(n!=0){
		if(n%10==3||n%10==7||n%10==5||n%10==2){
			sum+=n%10;
			n/=10;
		}
	}return sum;
}
int check_5(int n){
	int solatnguoc=0;
	while(n!=0){
		solatnguoc=solatnguoc*10+n%10;
		n/=10;
	}return solatnguoc;
}
int check_6(int n){
	int cnt =0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0&&check_1(i)==1){
			++cnt;
		}
	}return cnt;
}
int check_7(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0&&check_1(i)==1){
			cnt = max(cnt,i);
		}
	}return cnt;
}
int check_8(int n){
	while(n!=0){
		if(n%10==6)return 1;
		
		n/=10;
	}return 0;
}
int check_9(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
		
	}if(sum%8==0)return 1;
		return 0;
}
int check_10(int n){
	int cnt =0;
	while(n!=0){
		int k=1;
		for(int i=1;i<=n%10;i++)k*=i;
		cnt+=k;
		n/=10;
	}return cnt;
}
int check_11(int n){
	int k=n%10;
	while (n!=0){
		if(n%10!=k)return 0;
		n/=10;
	}return 1;
}
int check_12(int n){
	int k=n%10;
	while(n!=0){
		if(n%10>k)return 0;
		n/=10;
	}return 1;
}

int check_13(int n){
	int cnt =0;
	int m=n;
	while (m>0){
		cnt++;
		m/=10;
	}
	int tong =0;
	int temp=n;
	while(temp>0){
		int chuso = temp%10;
		 tong += pow(chuso,cnt);
		temp/=10;
	}return tong;
}
int main(){
	int n;
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

