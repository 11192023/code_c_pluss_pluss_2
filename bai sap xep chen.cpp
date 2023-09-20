#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	int x=a[i];
	int pos =i-1;
	while(pos>=0&&a[pos]>x){
		a[pos+1]=a[pos];
		pos--;
	}
	cout<<x<<" "<<pos+1<<endl;
	a[pos+1]=x;
	
} cout<<endl;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
        cout << key << " " << j+1 << endl;
    }

    return 0;
}

