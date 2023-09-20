#include<iostream>

using namespace std;

int const MAX = 1000;

int main() {

	int N, K,j = 0, count = 0;
	int A[MAX];
	int B[MAX];
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if(A[i] <= K ){
			B[j] = A[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		for(int t = i + 1; t < j; t ++){
			if(B[i] + B[t] == K){
				count ++;
			}
		}
	}
	 
	cout << count;

	return 0;
}
