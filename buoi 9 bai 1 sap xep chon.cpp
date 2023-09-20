#include<iostream>
using namespace std;
//khai bao 1 cai mang de sap xep cac so trong mang
void selectsort(int a[],int n){
//khoi tao 1 vong lap for de duyet ra het tat ca cac phan tu trong mang 
//va gan gia tri cua chi so cho 1 gia tri  min
//duyet den n-1 vi sau gia tri cuoi khong cco ohan tu nao nua neu duyet den phan tu cuoi thi se sinh ra gia tri rac 
for(int i = 0;i<n-1;i++){
	//kkoi tao gia tri min_val va gan gia tri cua i vao min_val
	int min_val = i;
	//tiep theo khoi tao 1 mang de duyet het tat ca cac phan tu tiep theo cua gia tri i de xap sep
	//con cai nay phai duyt den ohan tu cuoi cung vi phai chon gia tri nao co gia tri nho nhat sep len dau neu khong duyet gia tri cuoi thi se co truong hop do la so nho nhat ma khong duyet thi se bi sai 
	for(int j = i+1;j<n;j++){
		if(a[j]<a[min_val]){
			min_val=j;
		}
	}
	//dung swap de hoan doi vi tri dau tien co gia tri nho nhat thanh gia tri moi tim duoc o tren
	swap(a[i],a[min_val]);
}
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	selectsort(a,n);
	for(int i=0;i<n;i++){
		cout <<a[i];
	}
	return 0;
	
}
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        cout << "Buoc " << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    selectionSort(A, n);
    return 0;
}

