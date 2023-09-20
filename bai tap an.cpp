#include <iostream>

using namespace std;

void enterArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void find_most_freq(int arr[], int n) {
    int maxCount = 0;
    int element = 0;
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int  j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            element = arr[i];
        }
    }
    cout << element << " " << maxCount;
    
}


int main(){
    int n;
    int arr[100];
    int count[100];
    cin >> n;
    enterArray(arr, n);
    find_most_freq(arr, n);
    return 0;
}
